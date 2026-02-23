#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Macheap{
    public:
    vector<int> heap;
    void bubbleup(int ind){
        while(ind>0){

            //find the parent
            int parent=(ind-1)/2;
            // if curr node > than parent,then swap

            if(heap[ind]>heap[parent]){
                swap(heap[ind],heap[parent]);
                ind=parent;
            }else{
                break;
            }
        }   
    } 
    // time complexity: O(logn)
    //Space Complexity: O(1) for bubbleup
    void insert(int val){
        heap.push_back(val);
        bubbleup(heap.size()-1);
    }

    void bubbledown(){
        int i=0;
        int size=heap.size();

        while(i<size){
            int left=2*i+1;
            int right=2*i+2;
            int largest=i;

            if(left<size && heap[left]>heap[largest]){
                largest=left;
            }
            if(right<size && heap[right]> heap[largest]){
                largest=right;
            }

            if(largest!=-1){
                swap(heap[i],heap[largest]);
                i=largest;
            }else{
                break;
            }
        }
    }

    void delete
};
int main(){

}