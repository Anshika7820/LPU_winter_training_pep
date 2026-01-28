#include<iostream>
using namespace std;
    void merge(int nums1[], int m, int nums2[], int n) {
       int i=m-1;
       int j=n-1;
       int k=m+n-1;
       while(j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            i--;
        }
        else{
            nums1[k]=nums2[j];
            j--;
        }
        k--;
       }
    //    while(j>=0){
    //     nums1[k]=nums2[j];
    //     j--;
    //     k--;
    //    }
    }
    int main(){
        int nums1[]={1,2,3,0,0,0};
        int m=3;
        int n=3;
        int nums2[]={2,5,6};
        merge(nums1,m,nums2,n);
        for(int i=0;i<m+n;i++){
            cout<<nums1[i]<<" ";
        }
    }

