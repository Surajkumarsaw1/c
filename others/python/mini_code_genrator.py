from os import walk
import glob
import os



f = []
f2 = []
mypath = os.getcwd()

import os

files = []

dirlist = ['.']

# while len(dirlist) > 0:
#     for (dirpath, dirnames, filenames) in os.walk(dirlist.pop()):
#         dirlist.extend(dirnames)
#         files.extend(map(lambda n: os.path.join(*n), zip([dirpath] * len(filenames), filenames)))

# print(files)
# f = files
# for base, dirs, files in walk(mypath):
#     f.extend(files)
#     break
# print(f)

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

# f = open("config.json")
# json_dic = json.load(f)
# f.close()   

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
            print("Wait for a minite retrying")
            return getResponse(prompt)
        
def minimizer(filename):
    if os.path.exists(filename):
        with open(str(filename), 'r') as f:
            data = f.read()

        prompt = f"minimize the given code \"{data}\""
        response=getResponse(prompt)
        print(response)
    else:
        print("File does not exists.")


def dirlster(path="."):
    dirlst = []
    # print(os.listdir())
    # print(path)
    abspath = os.path.abspath(path)
    # print(abspath)
    
    for base,dirnames,filenames in os.walk(abspath):
        # print(dirnames)
        if ".git" in dirnames:
            dirnames.remove(".git")
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

# print(dirlster())
# print(filelster(dirlster()))


# if __name__ == "__main__":
#     for file in filelster(dirlster()):
#         renumbering(file)
#         print()

minimizer("rename.py")
