#include<iostream>
using namespace std;

class Myqueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;

    Myqueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void Enqueue(int val){
        if(rear==size-1){
            cout<<"queue overflowed"<<endl;
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }

    void Dequeue(){
        if(front==-1 || front>rear){
            cout<<"queue underflow";
            return;
        }
        front++;
    }
  
    // to get the front element in queue---

    int frontElement(){
        if(front==-1 || front>rear){
        cout<<"Queue is empty"<<endl;
        return -1;
        }
    return arr[front];
    }

    void printQueue(){
    if(front==-1 || front>rear){
        cout <<"Queue is empty"<< endl;
        return;
    }
    cout <<"Queue elements: ";
    for(int i=front; i<=rear; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    }
     

};
