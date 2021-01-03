M = input()
s1 = set(list(map(int,input().split())))
N = input()
s2 = set(list(map(int,input().split())))

store = []

for x in (s1.difference(s2)):
    store.append(x)
    
for x in (s2.difference(s1)):
    store.append(x)    

for x in sorted(store):
    print(x)
