m =int(input())
s1 = set(map(int,input().split()))
n = int(input())
s2 = set(map(int,input().split()))

print(len(list(s1.symmetric_difference(s2))))
