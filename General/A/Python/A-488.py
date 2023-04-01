a, b = int(input()), 0
a+=1
while '8' not in list(str(a)):
    b+=1
    a+=1
print(b+1)