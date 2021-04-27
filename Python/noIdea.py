# Enter your code here. Read input from STDIN. Print output to STDOUT
n, m = map(int, input().split())
array = list(map(int, input().split()))

A = [int(x) for x in input().split()]
B = [int(x) for x in input().split()]

happiness = 0

dictArray = {}
for a in array:
	dictArray[a] = dictArray.get(a, 0) + 1

# print(f'dictionary:\t{dictArray}')

for i in range(m):
	getA, getB = dictArray.get(A[i], 0), dictArray.get(B[i], 0)
	# print(getA, getB)
	if getA:
		happiness += 1
	if getB:
		happiness -= 1
	

print(happiness)