#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cout<<"enter the number of vertices: ";
    cin>>n;
    cout<<"enter the number of edges: ";
    cin>>m;

    unordered_map<int, list<pair<int,int>>> adjlist;
 
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;

        adjlist[u].push_back({v,w});
        adjlist[v].push_back({u,w});
    }
    cout<<"Adjacency List: "<<endl;

    for(auto i:adjlist){
        cout<<i.first <<"->";
        for(auto j : i.second){
            cout<<"("<<j.first<<","<<j.second<<")"<<" ";
        }
        cout<<endl;
    }
}