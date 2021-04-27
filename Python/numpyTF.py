import numpy as np

N, M = map(int, input().split())
arr = np.zeros((N, M), dtype='int8')

for i in range(N):	
	row = list(map(int, input().split()))
	arr[i, :] = row
	row = []

print(arr.transpose(), arr.flatten(), sep='\n')