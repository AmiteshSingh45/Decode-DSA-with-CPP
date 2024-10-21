#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>& q){
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverse(queue<int>& q){
    int n=q.size();
    stack<int> st;
    for(int i=0;i<n;i++){
        int x=q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    cout<<endl;
}

int main (){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    display(q);
    reverse(q);
    display(q);

}