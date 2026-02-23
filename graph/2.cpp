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

    unordered_map<int, list<int>> adjlist;
 
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adjlist[u].push_back(v);
        adjlist[v].push_back(u);

    }
    cout<<"Adjacency List: "<<endl;

    for(auto i:adjlist){
        cout<<i.first <<"->";
        for(auto j : i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}