# You are given three integers x,y and z representing the dimensions of a cuboid
# along with an integer n. Print a list of all possible coordinates given by (i,j,k) on a
# 3D grid where the sum of  is not equal to . Here, 0<=i<=x,0<=j<=y,0<=k<=z.

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
       
