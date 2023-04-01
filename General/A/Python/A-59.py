string, cupper, clower = input(), 0, 0
for x in string:
    if x.isupper():
        cupper+=1
    else:
        clower+=1
if(cupper>clower):
    print(string.upper())
else:
    print(string.lower())