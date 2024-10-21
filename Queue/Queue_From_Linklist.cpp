#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
public:
    Node* head;
    Node* tail;
    int size;
    Queue(){
        head=tail=NULL;
        size=0;
    }
    void push(int val){  
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    
    void pop(){
        if(size==0) cout<<"Queue is empty";
        if(size==1) head=tail=NULL; size--;
        if(size>1){
            head=head->next;
            size--;
        }
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    Queue q;
    q.pop();
    q.push(20);
    q.push(30);
    q.push(10);
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(90);
    q.display();
    q.pop();
    q.display();

}