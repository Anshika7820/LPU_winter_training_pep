// https://leetcode.com/problems/find-first-palindromic-string-in-the-array/

class Solution {
public:
   bool palindromechecker(string s){
    string x=s;
    int l=0;
    int r=s.length()-1;
    while(l<r){
       if(s[l++]!=s[r--]) return false;
    }
    return true;
   }
    string firstPalindrome(vector<string>& words) {
        int n=words.size();

        for(int i=0;i<n;i++){
           if(palindromechecker(words[i])){
            return words[i];
           }
        }
        return "";
        
    }
};