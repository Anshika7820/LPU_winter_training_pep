#include<iostrean>
usinh namepsace std;

 void levelorder(node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
       Node* frontnode=q.front();
       q.pop();
       
       if(frontnode!=NULL){
        cout<<frontnode->data<<" ";
        
        if(fronnode->left) q.push(frontnode->left);
        if(frontnode->right) q.push(fronnode->right);

       }else if(!q.empty()){
        q.push(NULL);
       }
    } 
    
 }