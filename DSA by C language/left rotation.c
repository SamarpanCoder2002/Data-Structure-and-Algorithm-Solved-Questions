int* rotateLeft(int d, int arr_count, int* arr, int* result_count) {
    int temp[d],i,j=0;
    j=0;
        for(i=0;i<d;i++)
            temp[i]=arr[i];
        for(i=d;i<arr_count;i++)
            arr[i-d]=arr[i];
        j=0;
        for(i=arr_count-d;i<arr_count;i++){
            arr[i]=temp[j];
            j++;
        }

    *result_count=arr_count;

    return arr;
}
