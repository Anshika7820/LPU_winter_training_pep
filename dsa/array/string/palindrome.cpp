#include<iostream>
using namespace std;
string palindrome(string str){
    int n=str.length()-1;
    int l=0;
    while(l<n){
        swap(str[l++],str[n--]);
    }
    return str;

}
int main(){
    string str="NamaN";
    string pal=palindrome(str);
    if(str==pal){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
}