n = int(input())
s = ""
while(n):
    rem = str(n%2)
    n = n//2
    s+=rem
print(s[::-1])
