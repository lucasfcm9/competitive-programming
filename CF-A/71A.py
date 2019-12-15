#!/usr/bin/env python3
n=int(input())
for i in ' '*n:
	s=input()
	print(s if len(s)<=10 else s[0]+str(len(s)-2)+s[-1])

