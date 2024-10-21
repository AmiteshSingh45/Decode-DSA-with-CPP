#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    // int arr[6];
    vector<int> arr;

    // Queue(){
    //     f=0;
    //     b=0;
    // }

    Queue(int val){
        f=0;
        b=0;
        vector<int> v(val);
        arr=v;
    }

    void push(int val){
        // if(b==6) cout<<"Queue is Full"; 
        if(b==arr.size()) cout<<"Queue is Full"; 
        else{
            arr[b]=val;
            b++;
        }
    }
    void pop(){
        if(size()==0) cout<<"Queue is Empty";
        else{
            f++;
        }
    }
    int front(){
        if(size()==0) { cout<<"Queue is Empty"; return -1;}
        else return arr[f];
    }
    int back(){
        if(size()==0){ cout<<"Queue is Empty"; return -1;}
        else return arr[b-1];
    }
    int size(){
        return (f-b);
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main (){
    // Queue q;
    Queue q(10); // queue of size 10

    q.push(20);
    q.push(30);
    q.push(10);
    q.display();
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(90);
    q.display();
    q.pop();
    q.display();

}