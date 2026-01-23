class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        if(arr.size() < 3){ 
            return -1;
        }
        int large = -1, seclar = -1, thlar = -1;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] > large) {
                thlar = seclar;
                seclar = large;
                large = arr[i];
            }
            else if(arr[i] > seclar) {
                thlar = seclar;
                seclar = arr[i];
            }
            else if(arr[i] > thlar) {
                thlar = arr[i];
            }
        }
        return thlar;
    }
};
