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
        this->prev=NULL;
    }
};

void display(Node* head){
    Node* temp=head;                    // space comp=O(1)   recursion ka O(n)
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void displayRev(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

int main () {
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);

    a->next=b;
    b->next=c;
    b->prev=a;
    c->next=d;
    c->prev=b;
    d->next=e;
    d->prev=c;
    e->prev=d;

    display(a);
    displayRev(e);
}