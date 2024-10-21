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

void MorrisTraversal(Node* curr,vector<int>& ans){
    while(curr!=NULL){
       if(curr->left!=NULL){ // find predessasor
           Node* pred=curr->left;
           while(pred->right!=NULL || pred->right!=curr) pred=pred->right;
       
         if(pred->right==NULL){ // LINK
          pred->right=curr;
          curr=curr->left;
         }
          if(pred->right==curr){ //UNLINK
            pred->right=NULL;
            ans.push_back(curr->val);
            curr=curr->right;
          }
       }
       else{ // curr->left==NULL
       ans.push_back(curr->val);
        curr=curr->right;
       }
    }
}

int main() {
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
 vector<int> ans;
 MorrisTraversal(a,ans);

 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
 }

}