n = int(input())
A = set(map(int,input().split()))
N = int(input())
for _ in range(N):
    take = input().split()
    set_take = set(map(int,input().split()))
    if take[0] == "intersection_update":
        A.intersection_update(set_take)
    elif take[0] == "update":
        A.update(set_take)
    elif take[0] == "symmetric_difference_update":
        A.symmetric_difference_update(set_take)
    else:
        A.difference_update(set_take)    

count = 0

for x in list(A):
    count+=int(x)

print(count)
    
