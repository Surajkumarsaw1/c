from os import walk
import glob
import os
import time 
f = []
f2 = []
mypath = os.getcwd()

files = []

dirlist = ['.']

def renumbering(path="."):
    print(path)
    f = []
    f2 = []
    
    
    # print(path)

    if (os.path.exists(path) == True):
        if os.path.isdir(path):
            path = os.path.join(path, "*.c")
            for file in glob.glob(path, recursive = True):
                f.append(file)
            # print(f)
        else:
            f.append(path)
    
    print(f)

    num = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    for i in range(0, len(f)):
        filepath = f[i]
        filename = os.path.basename(filepath)
        base = filepath.rstrip(filename)
        print(filename)
        ext = filename.split(".")[-1]
        if ext == "c":
            print(filename[0],filename[1])
            if ((filename[0] in num) and ( filename[1] in num)):
                continue
            elif (filename[0] in num):
                file = os.path.join(base,'0'+filename)
                f2.append((f[i], file))
        
    print(f2)
    

    for i in range(0,len(f2)):
        # continue
        try:
            try:
                os.system(f"git mv {f2[i][0]} {f2[i][1]}")
            except Exception as e:
                print(str(e))
                try:
                    os.system(f"mv {f2[i][0]} {f2[i][1]}")
                except Exception as e:
                    print(str(e))
        except Exception as e:
            print(str(e))

    return [path,f2]


import openai 
import json
import pandas as pd

with open("config.json", 'r') as f:
    config = json.load(f)


api_key = config["openai-api-key"]
openai.api_key = api_key
conversation=[]

def chatGPTResponse(conversation):
    try:
        response = openai.ChatCompletion.create(
            model='gpt-3.5-turbo',
            messages=conversation
        )
    except openai.error.APIConnectionError:
        return None

    conversation.append({'role':response.choices[0].message.role,
                        'content':response.choices[0].message.content})
    return conversation

def getResponse(prompt):
    
    global conversation
    
    try:
        conversation.append({'role':'user', 'content':prompt})
        conversation=chatGPTResponse(conversation)

        return conversation[-1]['content'].strip()
    except Exception as e:
        print(str(e))
        try:
            conversation.pop(0)
            conversation.pop(-1)
            return getResponse(prompt)
        except Exception as ee:
            print(str(ee))
            print("Wait for a minite retrying....")
            time.sleep(60)
            return getResponse(prompt)
        
def minimizer(path, save=False):
    print(path)
    f = []
    f2 = []

    if (os.path.exists(path) == True):
        if os.path.isdir(path):
            path = os.path.join(path, "*.c")
            for file in glob.glob(path, recursive = True):
                f.append(file)
            # print(f)
        else:
            f.append(path)
    
    print(f)

    num = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    for i in range(0, len(f)):
        filepath = f[i]
        filename = os.path.basename(filepath)
        base = filepath.rstrip(filename)
        print(filename)
        ext = filename.split(".")[-1]
        if ext == "c":
            print(filename[0],filename[1])
            if ((filename[0] in num) and ( filename[1] in num)):
                file = os.path.join(base,'0'+filename[:-3]+"-min.c")
                f2.append((f[i], file))
        
    print(f2)

    for i in range(0,len(f2)):
        filename = f2[i][0]
        if os.path.exists(filename):
            with open(str(filename), 'r') as f:
                data = f.read()

            prompt = f"minimize the given code and result should only give code : \"{data}\""
            response=getResponse(prompt)
            print(response)
            if save:
                savefile(data=minimizer(filename), name= f2[i][1])
            return str(response)
        else:
            print("File does not exists.")
            return str(f"{filename} does not exists.")


def dirlster(path="."):
    dirlst = []
    # print(os.listdir())
    print("dirlster :",path)
    abspath = os.path.abspath(path)
    # print(abspath)
    ignore_dir = [".git", "venv"]

    for base,dirnames,filenames in os.walk(abspath):
        # print(dirnames)
        for d in ignore_dir:
            if d in dirnames:
                dirnames.remove(d)
        # print(filenames)
        for dir in dirnames:

            dirlst.append(os.path.abspath(os.path.join(base, dir)))

            dirlst.extend(dirlster(dir))

    return dirlst




def filelster(path='.'):
    # print(type(path))
    files = []

    if (type(path) == type("")):
        # print("path")
        if os.path.exists(path):
            if os.path.isdir(path):
                temp = os.listdir(path)
                for i in range(0,len(temp)):
                    temp[i] = os.path.join(path, temp[i])

                files.extend(temp)
            else:
                return []
        else:
            return []
    
    elif (type(path) == type([])):
        print("list of path")

        for p in path:
            files.extend(filelster(p))

    return files



def savefile(data="", name=""):
    if os.path.exists(name):
        if os.path.isfile(name):
            yn = input("You are going to overrite this file [y/n]")
            if yn == "y":
                with open(name, "w") as f:
                    f.write(data)

        else:
            print(f"Path not a file : {name}")
            print("Creating new file : ")
            with open(name, "a") as f:
                f.write(data)
    else:
        print(f"No path {name}")
        print("Creating new file : ")
        with open(name, "a") as f:
            f.write(data)
    



# print(dirlster())
# print(filelster(dirlster()))

# testname = "rename.py"
# savefile(data=minimizer(testname), name= f"min-{testname}")

if __name__ == "__main__":
    for file in filelster(dirlster()):
        # renumbering(file)
        minimizer(file)
        print()