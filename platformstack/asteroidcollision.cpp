// https://leetcode.com/problems/asteroid-collision/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int curr: asteroids){
            bool destroyed=false;

            while(!st.empty() && st.top()>0 && curr<0){
                int topval = st.top();

                if(abs(topval) < abs(curr)){
                    st.pop();
                    continue;
                }
                else if(abs(topval) > abs(curr)){
                    destroyed = true;
                }
                else{
                    st.pop();
                    destroyed = true;
                }
                break;
            }

            if(!destroyed) st.push(curr);
        }
        int n = st.size();
        vector<int> ans(n);
        for(int i = n-1; i >= 0; i--){
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};



// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int> st;
//         for(int i = 0; i < asteroids.size(); i++){
//             int curr = asteroids[i];
//             bool destroyed = false;
//             while(!st.empty() && st.top() > 0 && curr < 0){
//                 if(abs(st.top()) < abs(curr)){
//                     st.pop();
//                     continue;
//                 }
//                 else if(abs(st.top()) == abs(curr)){
//                     st.pop();
//                 }
//                 destroyed = true;
//                 break;
//             }

//             if(!destroyed) st.push(curr);
//         }

//         vector<int> ans(st.size());

//         for(int i = st.size()-1; i >= 0; i--){
//             ans[i] = st.top();
//             st.pop();
//         }

//         return ans;
//     }
// };
