n = int(input())
s = set(map(int, input().split()))
N = int(input())
for i in range(N):
    take = input().split()
    if take[0] == "pop":
        s.pop()
    elif take[0] == "remove":
        try:
            s.remove(int(take[1]))
        except:
            pass
    else:    
        s.discard(int(take[1]))

count = 0
for x in s:
    count+=x
print(count)    
