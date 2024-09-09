'''
Problem Link: https://www.hackerrank.com/challenges/30-binary-numbers/problem
'''

n=int(input())


binary=bin(n)

cnt=0
max=0
for i in range(len(binary)):
    if (binary[i]=="1"):
        cnt+=1
    else:
        cnt=0
   
    if (cnt>max):
        max=cnt

print(max)
