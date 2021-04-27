for _ in range(int(input())):
    n = int(input())
    a = [int(x) for x in input().strip().split()]
    # c = 0
    # for i in range(n):
    #     for j in range(n):
    #         if i != j and a[i] == a[j]:
    #             c += 1
    # O(n ^ 2) complexity
    # how to optimize this!?
    # trying the frequency table method
    
    freq = {}
    for num in a:
        freq[num] = freq.get(num, 0) + 1
    
    c = int()
    print(freq)
    for f in freq.values():
        # from math import factorial
        if f > 1:
            c += f * (f - 1)

    print(c)