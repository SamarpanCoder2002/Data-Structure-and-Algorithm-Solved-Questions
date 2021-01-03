if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    max_is = max(arr)
    while arr.count(max_is)>0:
        arr.remove(max_is)
    print(max(arr))    
