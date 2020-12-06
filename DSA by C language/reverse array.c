int* reverseArray(int a_count, int* a, int* result_count) {
    int temp=0,i,count=1;
    int arr[a_count];
    for(i=1;i<=a_count;i++)
       arr[i-1]=a[a_count-i];
    *result_count=a_count;
    for(i=0;i<a_count;i++)
       a[i]=arr[i];
    return(a);
}
