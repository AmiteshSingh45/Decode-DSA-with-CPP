#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class DEQUE{
public:
    Node* head;
    Node* tail;
    int size;
    DEQUE(){
        head=tail=NULL;
        size=0;
    }
    void push_back(int val){    // with the help of tail
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
        tail->next=temp;
        temp->next=NULL;
        temp->prev=tail;
        tail=temp;
        }
        size++;
    }
    void push_front(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            temp->prev=NULL;
            head=temp; 
        }
    size++;
    }
   
     void pop_front(){
        if(size==0) cout<<"list is empty";
        if(size==1) head=tail=NULL; size--;
        if(size>1){
            head=head->next;
            size--;
        }
    }
    void pop_back(){
        if(size==0) cout<<"list is empty";
        if(size==1) head=tail=NULL; size--;
        if(size>1){
            Node* temp=tail->prev;
            temp->next=NULL;
            tail=temp;
            size--;
        }
        
    }
    int front(){
        if(size==0) cout<<" queue is empty";
        else return head->val;
    }
    int back(){
        if(size==0) cout<<" queue is empty";
        else return tail->val;
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


int main(){
    DEQUE dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.display();
    dq.pop_back();
    dq.display();
     dq.pop_front();
    dq.display();
    cout<<dq.front();
}