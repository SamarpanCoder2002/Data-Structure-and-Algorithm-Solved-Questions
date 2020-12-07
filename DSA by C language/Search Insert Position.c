//Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it
//would be if it were inserted in order.

int binarySearch(int *nums, int start, int end, int target,int numsSize){
    int m;
    while(start<=end){
          m=(start+end)/2;
          if(nums[m]==target){
              return m;
          }
          else if(target>nums[m])
              start=m+1;
          else
              end=m-1;
      }

      if(target>nums[m]){
          if(m<=numsSize-1)
              return m+1;
          else if(m<numsSize-1 && target<nums[m+1]){
              return m;
          }
          else
              return m+1;
      }
      else{
          if(m-1<0)
              return m;
          else if(m<numsSize && target>nums[m-1])
              return m;
          return m-1;
      }

}


int searchInsert(int* nums, int numsSize, int target){
      return binarySearch(nums,0,numsSize-1,target,numsSize);
}
