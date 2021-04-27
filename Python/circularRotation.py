def circularRotation(a, k, q):
    k %= len(a)
    a = a[len(a) - k: ] + a[: len(a) - k]

    output = list()
    for i in q:
        output.append(a[i])
    
    return output

