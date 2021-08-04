
T = int(input())


for i in range(T):

	N = int(input())

	arr = [ int(x) for x in input().split() ]

	arr.sort()

	print("#", i+1, end='', sep='')

	for j in arr:
		print(' ', end='')
		print(j, end='')

	print()