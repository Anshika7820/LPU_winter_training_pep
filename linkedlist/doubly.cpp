#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtEnd(Node* &head, int val) {
    Node* node = new Node(val);

    if (head == NULL) {
        head = node;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = node;
    node->prev = temp;
}

void insertAtBegin(Node* &head, int val) {
    Node* node = new Node(val);

    if (head == NULL) {
        head = node;
        return;
    }

    node->next = head;
    head->prev = node;
    head = node;
}

void insertAtPosition(Node* &head,int val,int n){

    Node* node=new Node(val);

    if(n==1){
        node->next=head;
        head->prev=node;
        head=node;
        return;
    }
    
    Node* temp=head;

    for(int i=1;i<n-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        return ;
    }
    node->next=temp->next;
    node->prev = temp;
    temp->next = node;

}

void printDoublyList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;

    insertAtBegin(head, 1);
    insertAtBegin(head, 6);
    insertAtBegin(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);

    printDoublyList(head);

    cout<<endl;

    insertAtPosition(head,9,3);

    printDoublyList(head);

    return 0;
}
