'''
Problem Link: https://www.hackerrank.com/challenges/30-review-loop/problem
'''


t= int(input())

for i in range(t):
    s= str(input())
    odd=""
    even=""
    for i in range(len(s)):
        if (i % 2 == 0):
            even+=s[i]
        else:
            odd+=s[i]
    print(f"{even} {odd}")
        
