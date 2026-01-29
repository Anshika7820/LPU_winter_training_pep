// https://leetcode.com/problems/valid-anagram/submissions/1900693813/?difficulty=EASY&page=1

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length()!=t.length()) {
            return false;
        }
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s == t;

    vector<int> freq(26, 0);  
    for(char ch : s){ 
        freq[ch-'a']++;
    }
    for(char ch:t){ 
        freq[ch-'a']--;
    }
    for(int count:freq) {
        if (count != 0){
            return false;
        }
    }
    return true;
    }
};