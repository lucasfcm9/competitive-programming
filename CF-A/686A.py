#!/usr/bin/env python3
n,x=list(map(int,input().split()))
c=0
for i in ' '*n:
	s=input()
	if s[0]=='+':
		x+=int(s[2:])
	else:
		if int(s[2:])>x:
			c+=1
		else:
			x-=int(s[2:])
print(str(x)+' '+str(c))
		

