#include<iostream>
#include<queue>
using namespace std;

class Node{ // TREEE NODE
public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* levelorderQueue(Node* root){ //BFS
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }

}

Node* _Construct(int arr[],int n){
    queue<Node*> q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1,j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();

        Node* l;
        Node* r;

        if(arr[i]!=INT8_MIN) l=new Node(arr[i]);   
        else  l=NULL;
           
        if(j!=n && arr[j]!=INT8_MIN) r=new Node(arr[j]);
        else r=NULL;

        temp->right=r;
        temp->left=l;
        
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}

int main () {
    int arr[]={1,2,3,4,5,INT8_MIN,6,INT8_MIN,INT8_MIN,7,8,9,INT8_MIN};// int_min=NULL
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root= _Construct(arr,n);
    levelorderQueue(root);
}