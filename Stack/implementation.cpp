#include<iostream>
#include<stack>
using namespace std;

int main () {
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);    
    st.push(50);
    stack<int> s;// for storing the element in reb=verse order 
    while(st.size()>0){
        cout<<st.top()<<" ";
        s.push(st.top());
        st.pop();  
    }
}