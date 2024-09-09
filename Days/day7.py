'''
Problem Link: https://www.hackerrank.com/challenges/30-arrays/problem
'''

n= int(input())
a= list(map(int, input().split()))
a.reverse()

a= " ".join(str(x) for x in a)
print(a)
