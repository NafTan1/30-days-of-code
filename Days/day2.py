'''
Problem Link: https://www.hackerrank.com/challenges/30-operators/problem
'''

#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'solve' function below.
#
# The function accepts following parameters:
#  1. DOUBLE meal_cost
#  2. INTEGER tip_percent
#  3. INTEGER tax_percent
#

def solve(meal_cost, tip_percent, tax_percent):
    # Write your code here
    tip_cost=(tip_percent*meal_cost)/100
    tax_cost=(tax_percent*meal_cost)/100
    total_cost=meal_cost+tip_cost+tax_cost
    print(round(total_cost))
if __name__ == '__main__':
    meal_cost = float(input().strip())

    tip_percent = int(input().strip())

    tax_percent = int(input().strip())

    solve(meal_cost, tip_percent, tax_percent)
