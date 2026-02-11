//https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        int n = q.size();
        queue<int> q1;
        for(int i = 0; i<n/2; i++){
            q1.push(q.front());
            q.pop();
        }
        while(!q1.empty()){
            q.push(q1.front());
            q1.pop();

            q.push(q.front());
            q.pop();
        }
    }
};


//uing onlu one stack--

class Solution {
  public:
 void reverseStack(stack<int>& st) {
    stack<int> temp;
    while (!st.empty()) {
        temp.push(st.top());
        st.pop();
    }
    st = temp;
}
    void rearrangeQueue(queue<int> &q) {
        int n = q.size();
        stack<int>st;
        for(int i = 0; i<n/2; i++){
            st.push(q.front());
            q.pop();
        }
        reverseStack(st);
        while(!st.empty()){
            q.push(st.top());
            st.pop();

            q.push(q.front());
            q.pop();
        }
    }
};


// using wothout reverse--
