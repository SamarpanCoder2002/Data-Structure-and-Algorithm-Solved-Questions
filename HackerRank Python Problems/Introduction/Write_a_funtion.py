# Leap year Checking


def is_leap(year):
    if year%400 is 0:
        leap = True
    else:
        if year%4 is 0 and year%100 is not 0:
            leap = True
        else:
            leap=False        
    
    return leap

year = int(input())
