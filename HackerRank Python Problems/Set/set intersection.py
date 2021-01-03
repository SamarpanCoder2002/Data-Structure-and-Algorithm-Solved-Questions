n = int(input())
s1 = set(map(int,input().split()))
b = int(input())
s2 = set(map(int,input().split()))

print(len(list(s1.intersection(s2))))
