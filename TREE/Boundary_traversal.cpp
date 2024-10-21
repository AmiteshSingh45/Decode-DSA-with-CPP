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
int Level(Node* root){
    if(root==NULL) return 0;
    
    return 1+max(Level(root->left),Level(root->right));
}

void Nthlevel(Node* root,int currlevel,int targlevel){
    if(root==NULL) return;
    if(currlevel==targlevel){
        cout<<root->val<<" ";
        return;
    }
    Nthlevel(root->left,currlevel+1,targlevel);
    Nthlevel(root->right,currlevel+1,targlevel);
}

// void reverseNthlevel(Node* root,int currlevel,int targlevel){
//     if(root==NULL) return;
//     if(currlevel==targlevel){
//         cout<<root->val<<" ";
//         return;
//     }
//     reverseNthlevel(root->right,currlevel+1,targlevel);
//     reverseNthlevel(root->left,currlevel+1,targlevel);
// }

void levelorder(Node* root){
    int n=Level(root);
    for(int i=1;i<=n;i++){
        Nthlevel(root,1,i);
        cout<<endl;
    }
}

void leftBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL) leftBoundary(root->right);
}
void bottomBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
    cout<<root->val<<" ";
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void rightBoundary(Node* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    rightBoundary(root->right);
    if(root->right==NULL) leftBoundary(root->left);
    cout<<root->val<<" ";
}
int main () {
    int arr[]={1,2,3,4,5,INT8_MIN,6,7,INT8_MIN,8,INT8_MIN,9,10,INT8_MIN,11,INT8_MIN,12,INT8_MIN,13,INT8_MIN,14,15,16,INT8_MIN,17,INT8_MIN,INT8_MIN,18,INT8_MIN,19,INT8_MIN,INT8_MIN,INT8_MIN,20,21,22,23,INT8_MIN,23,24,25,26,27,INT8_MIN,INT8_MIN,28};// int_min=NULL
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root= _Construct(arr,n);
    cout<<"Boundary traversal is:"<<endl;
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root);
    
}