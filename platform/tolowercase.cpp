// https://leetcode.com/problems/to-lower-case/

class Solution {
public:
    string toLowerCase(string s) {
         for(int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};