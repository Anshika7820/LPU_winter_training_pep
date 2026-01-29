// https://leetcode.com/problems/koko-eating-bananas/?difficulty=EASY&page=1

class Solution {
public:
    int findmaxelement(vector<int> &piles){
        int maximum=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>maximum){
                maximum=piles[i];
            }
        }
        return maximum;
    }
    long long calculatehours(vector<int> &piles,int k){
        long long totalHours=0;
        for(int i=0;i<piles.size();i++){
            totalHours+=ceil((double(piles[i]))/k);
        }
        return totalHours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int maxi=findmaxelement(piles);
        int low=1;
        int high=maxi;
        int ans=high;
        while(low<=high){
            int mid=(low+high)/2;
            long long totalhours=calculatehours(piles,mid);
            if(totalhours<=h){
                ans=mid;
                 high=mid-1;
               
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};