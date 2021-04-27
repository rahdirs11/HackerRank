phoneBook = dict()
n = int(input())
for _ in range(n):
    line = input().strip().split()
    if not line[0] in phoneBook:
        phoneBook[line[0]] = int(line[1])

while n >= 1:
    search = input()
    print(f"{search}={phoneBook[search]}" if search in phoneBook else "Not found")
    n -= 1