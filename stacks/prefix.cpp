// craete a stack
// traverse from  right to left
// is(s[i]) is operand -> push in the stack
// else if it is operator-> create two variables to store top two elements,pop them and evaluate with operator,
// push teh result back in stack
// return the last remaining element from stack -> it is teh answer

#include <iostream>
#include <stack>
#include<cmath>
using namespace std;
int prefixEval(string s){
    stack<int> st;
    for (int i = s.size() - 1; i >= 0; i--){
        if (isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else{
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            int ans;
            switch (s[i]) {
            case '+':
                ans = x + y;
                break;
            case '-':
                ans = x - y;
                break;
            case '*':
                ans = x * y;
                break;
            case '/':
                ans = x / y;
                break;
            case '^':
                ans=pow(x,y);
                break;
            }
            st.push(ans);
        }
    }
    return st.top();
}
int main(){
    string s = "-+7*45+20";
    cout << prefixEval(s);
    return 0;
}
