import base64

T = int(input())

for i in range(T):

	string = input()
	temp = base64.b64decode(string)

	print( '#',(i+1),' ',temp.decode('ascii'), sep='' )