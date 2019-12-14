#!/usr/bin/env python3

ans=0;
n=int(input())
s=input()
for i in range(1,len(s)):
	ans+=(1 if s[i-1]==s[i] else 0)
print(ans)

