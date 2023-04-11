def decimalToBinary(n):
    return bin(n).replace("0b", "")

def binaryToDecimal(n):
    return int(n,2)

a = 13
b = 4
print(a, "=",decimalToBinary(a))
print(b,"=",decimalToBinary(b))

print( decimalToBinary (a & b), "=", (a & b))
print( decimalToBinary ( a | b), "=", (a | b))
print( decimalToBinary ( a ^ b), "=", (a ^ b))
print( decimalToBinary ( a << b), "=", (a << b))
print( decimalToBinary ( a >> b), "=", (a >> b) )
print( decimalToBinary ( ~a), "=", (~a))

