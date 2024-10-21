#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> &st){
    stack <int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
}

int main (){
  stack <int> st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  st.push(50);
 
  print(st);
  cout<<endl;
  // push At bootom
  stack <int> helpher;
    while(st.size()>0){
        helpher.push(st.top());
        st.pop();
    }
     
    helpher.push(200); //pushing new element

    while(helpher.size()>0){
        st.push(helpher.top());
        helpher.pop();
    }
    
    print(st);
}