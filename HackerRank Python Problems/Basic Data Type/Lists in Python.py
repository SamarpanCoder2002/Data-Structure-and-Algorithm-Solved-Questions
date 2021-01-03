if __name__ == '__main__':
    N = int(input())
    l = []
for i in range(N):
    take = input().split()
    if take[0] == "insert":
        l.insert(int(take[1]),int(take[2]))
    elif take[0] == "append":
        l.append(int(take[1]))
    elif take[0] == "remove":
        l.remove(int(take[1]))
    elif take[0] == "print":
        print(l)      
    elif take[0] == "sort":
        l.sort()
    elif take[0] == "pop":
        l.pop()
    elif take[0] == "reverse":
        l.reverse()           
    
