#include<iostream>
using namespace std;

class Stack{
public:
    int arr[5];
    int idx;

    Stack(){
       idx=-1;
    }
    void push(int val){
        if(idx==4) cout<<"stack overflow";
        idx++;
        arr[idx]=val;
    }

    void pop(){ 
        if(idx==-1) cout<<"stack underflow";
        idx--;
    }
    int top(){
        if(idx==-1) cout<<"stack underflow";
        return arr[idx];
    }
    int size(){
        return idx+1;
    }

    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
    }


};

int main (){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // st.push(50);
    // st.push(60);
    cout<<st.size();
    st.display();

}