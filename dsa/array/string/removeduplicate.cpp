#include<iostream>
#include<vector>
using namespace std;
string removeduplicate(string &str){
   vector<bool> visited(26,false);
   string ans="";
   for(char i:str){
       if(!visited[i]){
          ans.push_back(i);
          visited[i]=true;
       }
   }
   return ans;
}
int main(){
    string str="banana";
    cout<<removeduplicate(str);
    
}