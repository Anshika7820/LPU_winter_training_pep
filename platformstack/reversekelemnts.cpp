// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
class Solution {
  public:
    void reverseK(queue<int>& q, int k) {
        if (k == 0) return;
        int temp = q.front();
        q.pop();
        reverseK(q, k - 1);
        q.push(temp);
    }

    queue<int> reverseFirstK(queue<int> q, int k) {
        int n = q.size();
        if (k>n || k==0) return q;
        reverseK(q, k);
        for (int i = 0; i < n - k; i++) {
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};




class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        int n = q.size();
        stack<int> st;
        if (k>n || k==0) return q;
        for (int i = 0; i <k; i++) {
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        //run a loop till size-k and pop all the elemnts ofd queue and push them abck in queue
        for(int i=0;i<n-k;i++){
            q.push(q.front());
            q.pop();
        }
        return q;
        
    }
};
