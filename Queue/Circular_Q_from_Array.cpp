#include<iostream>
#include<vector>
using namespace std;

class CircularQueue{
public:
    int f;
    int b;
    vector<int> arr;

    CircularQueue(int size){
        f=-1;
        b=-1;
        vector<int> v(size);
        arr=v;
    }

    void push(int val){
        if(f==-1 && b==-1){
            f=b=0;
            arr[b]=val;   
        }
        else if((b+1)%arr.size()==f){
            cout<<"queue is full"<<endl;
            return;
        }
        else{
            b=(b+1)%arr.size();
            arr[b]=val;
        }
    }
    void pop(){
        if(f==-1 && b==-1){
        cout<<"queue is empty"<<endl;
        return;
        }
        else{
            f=(f+1)%arr.size();
        }
    }

    int front(){
        if(f==-1 && b==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[f];
            cout<<endl;
        }
    }
    int back(){
       if(f==-1 && b==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[b];
            cout<<endl;
        }
    }
    
    void display(){
        if(f==-1 && b==-1){
            cout<<"queue is empty"<<endl;
            return ;
        }
        else{
            int i=f;
            while(i!=b){
                cout<<arr[i]<<" ";
                i=(i+1)%arr.size();
            }
            cout<<arr[b];
        }
    }

};

int main (){
    CircularQueue q(4); // queue of size 10

    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.front();
    q.back();
}