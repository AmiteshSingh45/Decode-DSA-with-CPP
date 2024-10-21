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
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    DoublyLinkedList(){
        head=tail=NULL;
        size=0;
    }
    void InsertAtEnd(int val){    // with the help of tail
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
    void InsertAtBegining(int val){
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
    void InsertAtIndex(int val,int idx){
        Node* a=new Node(val);
        if(idx==0) InsertAtBegining(val);
        else if(idx==size-1) InsertAtEnd(val);
        else if(idx<0 || idx>size) cout<<"Invalid";
        else{
           Node* temp=head;
           for(int i=1;i<=idx-1;i++){
            temp=temp->next;
           }
           temp->next=a;
           a->prev=temp;
           a->next=temp->next;
           temp->next->prev=a;
           size++;
        }
    }
    
    void deleteAtHead(){
        if(size==0) cout<<"list is empty";
        if(size==1) head=tail=NULL; size--;
        if(size>1){
            head=head->next;
            size--;
        }
    }
    void deleteAtLast(){
        if(size==0) cout<<"list is empty";
        if(size==1) head=tail=NULL; size--;
        if(size>1){
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;           
            }
            temp->next=NULL;
        }
    }
    void deleteAtindex(int idx){
        if(idx==0) deleteAtLast();
        if (idx>0){
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
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
    DoublyLinkedList ll; //{}
    ll.InsertAtEnd(10);//{10->NULL}
    ll.InsertAtEnd(20);//{10->20->NULL}
    ll.InsertAtEnd(30);
    ll.InsertAtBegining(40);
    ll.InsertAtIndex(60,1);
    ll.display();
    ll.deleteAtindex(2);
    ll.display();
}