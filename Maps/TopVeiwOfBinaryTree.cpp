#include<iostream>
#include<queue>
#include<unordered_map>
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

void topveiw(Node* root){
    unordered_map<int,int> m;
    queue< pair<Node*,int> > q;
    pair<Node*,int> r;
    r.first=root; // root->val
    r.second=0; // level
    q.push(r);
    while(q.size()>0){
        Node* temp= q.front().first;
        int level = q.front().second;
        q.pop();
        if(m.find(level)==m.end()){ // map me nahi hai
            m[level]=temp->val;
        }
        if(temp->left!=NULL){
            pair<Node*,int> p;
            p.first=temp->left; // root->val
            p.second=level-1; // level
            q.push(p);
        }
        if(temp->right!=NULL){
            pair<Node*,int> p;
            p.first=temp->right; // root->val
            p.second=level+1; // level
            q.push(p);
        }
    }
    // now hashmap is full
    // now print the top veiw
    int minlevel=INT16_MAX;
    int maxlevel=INT8_MIN;
    for(auto x:m){
        int level=x.first;
        minlevel=min(minlevel,level);
        maxlevel=max(maxlevel,level);
    }

 
    for(int i=minlevel;i<=maxlevel;i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;

}

int main () {
    int arr[]={1,2,3,4,5,INT8_MIN,6,INT8_MIN,INT8_MIN,7,8,INT8_MIN,INT8_MIN};// int_min=NULL
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root= _Construct(arr,n);
    // levelorderQueue(root);
    topveiw(root);
} 