#!/usr/bin/env python3

s=input()
print([s.upper(),s.lower()][sum(i.islower() for i in s)*2>=len(s)])

