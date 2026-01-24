// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?difficulty=EASY&page=1

//optimized approach is this---

class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int best=prices[0];
       int maxpos=0; 
       for(int i=1;i<prices.size();i++){
             if(prices[i]>best){
                maxpos=max(maxpos,prices[i]-best);
             }
             best=min(best,prices[i]);
       }

       return maxpos;
    }
};




class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();   
        int min = INT_MAX;
        int profit = 0;
        for (int i = 0; i < n; i++) {
            if (prices[i] < min) {
                min = prices[i];  
            }
            else if (prices[i] - min > profit) {
                profit = prices[i] - min; 
            }
        }
        return profit;
    }
};
