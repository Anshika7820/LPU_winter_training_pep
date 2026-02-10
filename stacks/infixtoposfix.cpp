// https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1
class Solution{
  public:
    int prec(char c){
        if(c=='^') return 3;
        if(c=='*'||c=='/') return 2;
        if(c=='+'||c=='-') return 1;
        return -1;
    }
    string infixToPostfix(string& s){
        string ans="";
        stack<char> st;
        for(char c:s){
            if(isalnum(c)){ 
                ans+=c;
            }
            else if(c=='('){
                st.push(c);
            }
            else if(c==')'){
                while(!st.empty() && st.top()!='('){
                    ans+=st.top();
                    st.pop();
                }
                st.pop();
            }else{
                while(!st.empty() && prec(st.top())>=prec(c) && c!='^'){
                    ans+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
