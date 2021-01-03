def average(array):
    array = set(array)
    sumN = 0
    for x in array:
        sumN = sumN + x
    return(sumN/len(array))    
