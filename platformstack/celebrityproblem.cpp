// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1


class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int n=mat.size();
        stack<int> st;
        //push all persons in stack
        for(int i=0;i<n;i++){
            st.push(i);
        }
        //find the potential celebrity
        while(st.size()>1){
            int A =st.top();
            st.pop();
            
            int B=st.top();
            st.pop();
            
            //if A knows B then A cannot be celebrity
            
            if(mat[A][B]==1) st.push(B);
            else st.push(A);
        }
        int candidate = st.top();

        for(int i = 0; i < n; i++){
            if(i != candidate){
                if(mat[candidate][i] == 1 || mat[i][candidate] == 0){
                    return -1;
                }
            }
        }
        return candidate;
    }
};