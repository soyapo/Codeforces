hard = 0
for i in range(0, int(input())):
    hard = hard | int(input())
print("hard") if(hard) else print("easy")