
// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

class Solution {
  public:
    void insertElement(stack<int>& st,int x){
        if(st.empty()){
            st.push(x);
            return;
        }
        int temp=st.top();
        st.pop();
        insertElement(st,x);
        st.push(temp);
    }
    stack<int> insertAtBottom(stack<int> st, int x) {
         insertElement(st,x);
         return st;
    }
};