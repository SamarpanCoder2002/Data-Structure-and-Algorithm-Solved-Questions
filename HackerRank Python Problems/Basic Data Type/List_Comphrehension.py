from itertools import permutations
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    take_it= []
    keep=permutations((x,y,z))
    count=0
    for i in list(keep):
        for j in i:
            count+=j
        if count is n:    
           take_it.append(i)
           count=0
    print(take_it)       
       
