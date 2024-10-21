#include<iostream>
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

void reverseNthlevel(Node* root,int currlevel,int targlevel){
    if(root==NULL) return;
    if(currlevel==targlevel){
        cout<<root->val<<" ";
        return;
    }
    reverseNthlevel(root->right,currlevel+1,targlevel);
    reverseNthlevel(root->left,currlevel+1,targlevel);
}

void levelorder(Node* root){
    int n=Level(root);
    for(int i=1;i<=n;i++){
        reverseNthlevel(root,1,i);
        cout<<endl;
    }
}

int main () {
 Node* a=new Node(1); // root of the tree
 Node* b=new Node(2);
 Node* c=new Node(3);
 Node* d=new Node(4);
 Node* e=new Node(5);
 Node* f=new Node(6);
 Node* g=new Node(7);

 a->left=b;
 a->right=c;
 b->left=d;
 b->right=e;
 c->left=f;
 c->right=g;


 levelorder(a);
 

 

}