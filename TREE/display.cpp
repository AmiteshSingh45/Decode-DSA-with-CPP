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

void displayTree(Node* root){
    if(root==NULL) return;
        cout<<root->val<<" ";
        displayTree(root->left);
        displayTree(root->right);
    
}
int sum(Node* root){
    if(root==NULL) return 0;
    int leftsum = sum(root->left);
    int rightsum=sum(root->right);
    int ans=root->val + leftsum + rightsum;
    return ans;
}

int size(Node* root){
    if(root==NULL) return 0;
    int count=1+size(root->left)+size(root->right);
    return count;
}

int maxIntree(Node* root){
    if(root==NULL) return INT8_MIN;
    int lmax=maxIntree(root->left);
    int rmax=maxIntree(root->right);
    return max(root->val,max(lmax,rmax));
}

int NoLevel(Node* root){
    if(root==NULL) return 0;
    
    return 1+max(NoLevel(root->left),NoLevel(root->right));
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

 displayTree(a);
 cout<<endl;
 cout<<sum(a)<<endl;
 cout<<size(a)<<endl;
 cout<<maxIntree(a)<<endl;
 cout<<NoLevel(a)<<endl;

}