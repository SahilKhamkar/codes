def intersection(I1, I2):
    res = []
    for student in I1:
        if student in I2:
            res. append(student)
    return res

def union(I1, I2):
    res = I2. copy()
    for student in I1:
        if not student in I2:
            res. append(student)
    return res

def diff(I1, I2):
    res = []
    for student in I1:
        if not student in I2:
            res. append(student)
    return res

a = [1, 2, 3, 4, 5, 6, 7]
b = [2, 3, 6, 7, 9, 10]
c = [2, 4, 6, 8, 10, 12]

# Cricket
# Badminton
# FootbaLL

print(f"A = {a}\nB = {b}\nC = {c}\n")
print(f"a. {intersection(a, b)}")
print(f"b. {diff(union(a, b), intersection(a, b))}")
print(f"c. {diff(diff(c,b),a)}")
print(f"d. {diff(union(a, c), b)}")