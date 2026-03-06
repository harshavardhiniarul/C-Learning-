n = int(input("Enter a number: "))
key = 0
if n <= 1:
    key = 1
for i in range(2, int(n / 2) + 1):
    if n % i == 0:
        key = 1
        break
if key == 0:
    print(n, "is Prime")
else:
    print(n, "is not Prime")
