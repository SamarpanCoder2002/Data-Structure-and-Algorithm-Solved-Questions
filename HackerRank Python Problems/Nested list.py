# Given the names and grades for each student in a class of N students, store
# them in a nested list and print the name(s) of any student(s) having the
# second lowest grade.

if __name__ == '__main__':
    _main = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        temp=[]
        temp.append(name)
        temp.append(score)
        _main.append(temp)
    min_is=_main[0][1]
    s_min=_main[len(_main)-1][1]
    for i in range(1,len(_main)):
        while min_is == _main[i][1]:
            i+=1
          
        if min_is>_main[i][1]:
            s_min=min_is
            min_is=_main[i][1]
        elif s_min>_main[i][1]:
            s_min=_main[i][1]        
    temp=[]
    for x in _main:
        if x[1] == s_min:
           temp.append(x[0])              
    temp.sort()       
    for x in temp:
        print(x)       
    
    
        
        
        
