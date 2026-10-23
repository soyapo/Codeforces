hard = 0
input()
for x in input().split():
    hard = hard | int(x)
print("hard") if(hard) else print("easy")