def count_substring(string, sub_string):
    string = list(string)
    count = 0 
    permission = 0
    for i in range(len(string)):
        if sub_string[0] == string[i]:
            for j in range(len(sub_string)):
                try:
                    if sub_string[j] == string[i+j]:
                        permission = 1
                    else:
                        permission = 0
                        break       
                except:
                    return count
            if permission == 1:
                count+=1                                     
    return count
print(count_substring('ininini',['i','n','i']))
