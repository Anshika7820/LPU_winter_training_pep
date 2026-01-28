
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[k]){
                k++;
                nums[i]=nums[k];
            }
        }
        return k+1;
    }

    int main(){

    }