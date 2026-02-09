#include<iostream>
using namespace std;
class MyStack{
    public:
    int *arr;
    int top;
    int size;

    MyStack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int val){
        if(top==size-1){
            cout<<"stack overflow"<,endl;
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop(){
         if(top==-1){
            cout<<"stack underflow";
            return;
         }
         top--;
    }

    int peakelement(){
        if(top=-1){
            return -1;
        }
        return arr[top];
    }   

    bool ismepty(){
        return top==-1;
    }
};
int main(){
   MyStack st(5);
   st.push(1);
   st.push(2);
   st.push(1);
   st.push(2);
   st.push(1);
   cout<<st.isempty();
}