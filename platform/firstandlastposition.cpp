// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/?difficulty=EASY&page=1
class Solution {
public:
    int firstOccurrence(vector<int> &arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                ans = mid;
                high = mid - 1;
            }else if (arr[mid] < target) {
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }
        return ans;
    }
    int lastOccurrence(vector<int> &arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                ans = mid;
                low = mid + 1;    
            } else if (arr[mid] < target) {
                low = mid + 1;
            }else {
                high = mid - 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& arr, int target) {
        return { firstOccurrence(arr, target),lastOccurrence(arr, target) };
    }
};
