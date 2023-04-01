num, isval, test = list(str(int(input()))), 1, ["4","7", 4, 7]
def fil(x):
    if x not in test:
        return False
    else:
        return True
num = list(filter(fil, num))
if len(num) not in test:
    print("NO")
else:
    print("YES")