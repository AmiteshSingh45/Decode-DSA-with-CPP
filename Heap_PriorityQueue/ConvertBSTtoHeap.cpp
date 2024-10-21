#include<iostream>
#include<vector>
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

void inorder(Node* root,vector<int>& dec){
    if(root==NULL) return;
    inorder(root->right,dec);
    dec.push_back(root->val);
    inorder(root->left,dec);
}

void preorderwiseFill(Node* root,vector<int>& dec,int& i){
    if(root==NULL) return;
    root->val=dec[i++];
    preorderwiseFill(root->left,dec,i);
    preorderwiseFill(root->right,dec,i);
}

int main () {
 Node* a=new Node(10); // root of the tree
 Node* b=new Node(5);
 Node* c=new Node(16);
 Node* d=new Node(1);
 Node* e=new Node(8);
 Node* f=new Node(12);
 Node* g=new Node(20);

 a->left=b;
 a->right=c;
 b->left=d;
 b->right=e;
 c->left=f;
 c->right=g;

 vector<int> dec; //reverse of inorder
 inorder(a,dec);
 for(int i=0;i<dec.size();i++){
    cout<<dec[i]<<" ";
 }
 cout<<endl;
 int i=0;
 preorderwiseFill(a,dec,i);
 

}