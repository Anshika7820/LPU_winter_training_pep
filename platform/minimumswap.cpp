// https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/?difficulty=EASY&page=1

class Solution{
public:
	int minSwaps(vector<int>&nums){
		int n=nums.size(),totalones=0;
		for(int i=0;i<n;i++){
			if(nums[i]==1){
				totalones++;
			}
        }
		if(totalones==0){
			return 0;
		}
		int currones=0;
		for(int i=0;i<totalones;i++){
			if(nums[i]==1){
				currones++;
			}
		}
		int maxOnes=currones;
		for(int i=totalones;i<n+totalones;i++){
			// if(nums[(i-totalones)%n]==1){
			// 	currones--;
			// }
			// if(nums[i%n]==1){
			// 	currones++;
			// }

            //in place of above one---

            currones -= nums[(i-totalones)%n];
            currones += nums[(i%n)];
			maxOnes=max(maxOnes,currones);
		}
		return totalones-maxOnes;
	}
};
