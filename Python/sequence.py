'''
There is a sequence whose nth term is Tn = n ** 2 - (n - 1) ** 2
Evaluate the series
	Sn = T1 + T2 ... + Tn
Find .
Example


The series is .

Function Description

Complete the summingSeries function in the editor below.

summingSeries has the following parameter(s):

int n: the inclusive limit of the range to sum
Returns

int: the sum of the sequence, modulo 
Input Format

The first line of input contains , the number of test cases.
Each test case consists of one line containing a single integer .

Constraints

Sample Input 0
'''

'''
Its a simple problem -> Sn = n ** 2 xD
'''

def solve(n: int) -> int:
	return n ** 2 % (10 ** 9 + 7)