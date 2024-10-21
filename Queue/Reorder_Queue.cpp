// interleave first half with second half

/*
 queue  1 2 3 4 5 6 7 8
 ans q     1   2   3   4
             5   6   7   8
           1 5 2 6 3 7 4 8
*/

// using only one stack
#include<iostream>
#include<stack>
#include<queue>
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

void Reorder(queue<int>& q){
   int n=q.size();
   stack<int> st;
   //first half ko st me push
   for(int i=1;i<=n/2;i++){
      st.push(q.front());
      q.pop();
   }
   while(st.size()>0){
    q.push(st.top());
    st.pop();
   }
   //second half ko stack me push
   for(int i=1;i<=n/2;i++){
      st.push(q.front());
      q.pop();
   }
   // main part
   while(st.size()>0){
    q.push(st.top());
    st.pop();
    q.push(q.front());
    q.pop();
   }
   // now we have to reverse the q to get ans;
   reverse(q);

}

    
int main() {
  queue<int> q;
  q.push(1);
  q.push(2); 
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  display(q);
  Reorder(q);
  display(q);
}

