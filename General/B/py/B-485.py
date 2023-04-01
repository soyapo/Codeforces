x, y = map(int, input().split())
if x == y:
	print('=')
elif x == 1:
	print('<')
elif y == 1:
	print('>')
elif x + y == 6:
	print('=')
elif x == 3:
	print('>')
elif y == 3:
	print('<')
elif x < y:
	print('>')
else:
	print('<')
 