N = int(input())
store = []
for i in range(N):
    store.append(input())   
store = set(store)
print(len(store))
