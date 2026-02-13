/* 


Tree-> It is a non linear,hierarchical data structure consisting -
3.Siblings -> the children of same parent
4.Path -> the length of path is one less than the number of nodes on the path.
5.Ancestors and Descendents -> if there is a path from node A to Node B, then A is called an ancestor of B and B is called a descendent of A.
6.Subtree -> any node of a tree,with all of its descendents is a subtree.
7.Level -> the level of the node refers to its distance from the root, the root of the tree has generally level 0.


*/


#include<iostream>
using namespace std;
class Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
}
int main(){

}