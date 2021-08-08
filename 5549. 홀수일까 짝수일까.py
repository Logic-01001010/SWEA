T = input()

for i in range(int(T)):
	
	n = input()

	print( "#"+str(i+1)+' ', end='' )
	if int(n) % 2 == 0:
		print("Even")
	else:
		print("Odd")