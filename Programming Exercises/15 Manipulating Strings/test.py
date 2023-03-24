for i in range(1, 5):
    for j in range(i, i+3):
        print(j, end=' ')
    for j in range(i+2, i-1, -1):
        print(j, end=' ')
print()