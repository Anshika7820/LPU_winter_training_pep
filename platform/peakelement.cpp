
    #include<iostream>
    using namespace std;
    int findPeakElement(int nums[]) {
        int left = 0;
        int right = 3;
        int ans=-1;
    while (left <= right) {
        int mid = left + (right - left) / 2;   
         if(nums[mid]>nums[mid+1]){
            ans= mid;
         }else if(nums[mid]<nums[mid+1]){
            left=mid+1;
         }else{
            right=mid-1;
         }
    }
    return ans;  
    }
    int main(){
        int nums[]={1,2,3,1};
        cout<<findPeakElement(nums);
    }