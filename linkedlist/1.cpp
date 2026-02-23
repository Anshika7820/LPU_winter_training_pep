#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next = NULL;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node *&head, int val)
{

    Node *node = new Node(val);

    if (head == NULL)
    {
        head = node;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = node;
}

// void insertAtBegin(Node *&head, int val)
// {

//     Node *node = new Node(val);
//     if (head == NULL)
//     {
//         head = node;
//         return;
//     }
//     node->next = head;
//     head = node;
// }

// void insertAtPosition(Node *&head, int val, int n){

//     Node* node=new Node(val);

//     if(n == 1){
//         node->next=head;
//         head=node;
//         return ;
//     }

//     Node* temp=head;

//     for(int i=1;i<n-1 && temp!=NULL; i++){
//         temp=temp->next;
//     }

//     if(temp==NULL){
//         return;
//     }

//     node->next=temp->next;
//     temp->next=node;

// }


// void deletionAtLast(Node* &head){

//     Node* temp=head;
//     if(head==NULL){
//         return;
//     }
//     if(head->next == NULL){
//         delete head;
//         head = NULL;
//         return;
//     }
//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//    delete temp->next;
//    temp->next=NULL;
// }

// void deletionAtBegin(Node* &head){
//     Node* temp=head;
//      if(head==NULL){
//         return;
//     }
//     if(head->next == NULL){
//         delete head;
//         head = NULL;
//         return;
//     }

//     head=head->next;
//     delete temp;

// }



// void printLinkedList(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }

// void deletionAtPosition(Node* &head, int n){
//     if(head == NULL){
//         return;
//     }

//     if(n == 1){
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//         return;
//     }

//     Node* temp = head;

//     for(int i = 1; i < n - 1 && temp->next != NULL; i++){
//         temp = temp->next;
//     }

//     if(temp->next == NULL){
//         return;
//     }

//     Node* nodeToDelete = temp->next;
//     temp->next = nodeToDelete->next;
//     delete nodeToDelete;
// }

//count how many nodes have even values---

int countevendata(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data%2==0){
            count++;
        }
        temp=temp->next;
    }
    return count;
}

//search the key in ll using recursion---

bool searchkey(Node* head,int key){

    if(head==NULL){
        return false;
    }
    
    if(head->data==key){
        return true;
    }
    
    return searchkey(head->next,key);
}

int main()
{
    Node *head = NULL;

    insertAtEnd(head, 33);

    insertAtEnd(head, 42);

    // insertAtBegin(head, 4);

    insertAtEnd(head, 18);


    insertAtEnd(head, 11);

    insertAtEnd(head, 16);

    // insertAtEnd(head, 0);

    // insertAtEnd(head, 5);

    // printLinkedList(head);
     
    // cout << endl;

    // insertAtPosition(head,8,7);

    // printLinkedList(head);

    // deletionAtLast(head);

    // cout<<endl;

    // printLinkedList(head);

    // cout<<endl;
    // deletionAtBegin(head);

    // printLinkedList(head);

    // deletionAtPosition(head,2);

    // cout<<endl;

    // printLinkedList(head);
    // cout<<countevendata(head);

    cout<<searchkey(head,12);
    return 0;
}
