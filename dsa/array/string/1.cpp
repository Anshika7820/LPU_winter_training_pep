#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s="there are "+to_string(30+50) + " student in class";
    // cout<<s;

    // string s1="hello";
    // string s2="hello";
    // cout<<endl;
    // if(s1==s2){  //cout<<s1.compare(s2)
    //     cout<<"string are same";
    // }else{
    //     cout<<"string are not same";
    // }
    // cout<<s1.compare(s2);

    string str={"hello"};
    int n=str.length();
    int i=0;
    int j=n-1;
    while(i<j){
        swap(str[i++],str[j--]);
    }
    cout<<str;
}