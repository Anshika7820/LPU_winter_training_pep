class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    //max heap
    //pair of distance and value-> pair{distance,value}
    //we want the largest distance at top

    priority_queue<pair<int,int>> maxheap;

    for(int i=0;i<arr.size();i++){
        int dist=abs(arr[i]-x);
        maxheap.push({dist,arr[i]});

        if(maxheap.size() > k) {
            maxheap.pop();
        }    
    }

    vector<int> ans;
    while(!maxheap.empty()){
        ans.push_back(maxheap.top().second);
        maxheap.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
    }
};