// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        int n=s.length();
        int j=n-1;
        int count=0;
        while(i<j){
            if(s[j]==' '){
               j--;   
            }else{
               break;
            }
        }
        while(j >= 0 && s[j] != ' ') {
            count++;
            j--;
        }

        return count;
    }
};

// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int count = 0;
//         for (int j = s.length() - 1; j >= 0; j--) {
//             if (s[j] == ' ' && count > 0)
//                 break;
//             if (s[j] != ' ')
//                 count++;
//         }
//         return count;
//     }
// };
