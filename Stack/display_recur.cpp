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

int main () {
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);    
    st.push(50);
    DisplayRec(st);


}