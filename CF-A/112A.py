#!/usr/bin/env python3

s=input().lower()
p=input().lower()

if s==p:
	print(0)
else:
	print(1 if s>p else -1)

