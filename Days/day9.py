'''
Problem Link: https://www.hackerrank.com/challenges/30-recursion/problem
'''


n=int(input())
def factorial(num):
    
    if (num == 0): 
        return 1 
    
    a=factorial(num-1)
    return num*a

ans=factorial(n)
print(ans)
