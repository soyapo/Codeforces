inp, temp = list(input()), []
alph = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
for x in inp:
    if x in alph:
        temp.append(x)
print(len(set(temp)))