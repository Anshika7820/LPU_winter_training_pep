// https://leetcode.com/problems/valid-palindrome-ii/

class Solution {
public:
   bool checkpalindrome(string &str,int left,int right){
    while(left<right){
        if(str[left++]!=str[right--]) return false;

    }
    return true;
}
    bool validPalindrome(string s) {
     int l=0;
     int r=s.length()-1;
     while(l<r){
        if(s[l]==s[r]){
            l++;
            r--;
        }
        else{
          return checkpalindrome(s,l+1,r) || checkpalindrome(s,l,r-1);
        }
     }
     return true;
    }
};