#include<iostream>
#include<stack>
using namespace std;


void DisplayRec(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    st.pop();
    DisplayRec(st);
    cout<<x<<" ";
    st.push(x);
}

void ReverseDisplayRec(stack<int>& st){
    if(st.size()==0) return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    ReverseDisplayRec(st);
    st.push(x);

}
 
void PushAtBottom(stack<int>& st,int val){
    if(st.size()==0){ st.push(val); return;}
    int x=st.top();
    st.pop();
    PushAtBottom(st,val);
    st.push(x); 
}

void Reverse(stack<int>& st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    ReverseDisplayRec(st);
    PushAtBottom(st,x);
}

int main () {
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);    
    st.push(50);
    ReverseDisplayRec(st);
    cout<<endl;
    DisplayRec(st);
    cout<<endl;
    // PushAtBottom(st,500);
    DisplayRec(st);
    cout<<endl;
    cout<<endl;
    Reverse(st);

}