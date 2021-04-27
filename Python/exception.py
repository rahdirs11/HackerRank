for _ in range(int(input())):
    try:
        a, b = map(int, input().split())
        print(a // b)
    except ZeroDivisionError:
        print('Error Code: integer division or modulo by zero')
    except ValueError as y:
        print('Error Code: ', str(y).lower())