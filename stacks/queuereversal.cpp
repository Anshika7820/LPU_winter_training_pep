// https://www.geeksforgeeks.org/problems/queue-reversal/1

class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        int n=q.size();
        if(q.empty()) return;
        
        int temp=q.front();
        q.pop();
        
        reverseQueue(q);
        q.push(temp);
    }
};