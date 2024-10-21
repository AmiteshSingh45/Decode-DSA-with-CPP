#include<iostream>
#include<vector>
using namespace std;

class DEQUE{
public:
    int f;
    int b;
    vector<int> arr;

    DEQUE(int size){
        f=-1;
        b=-1;
        vector<int> v(size);
        arr=v;
    }
    void enqueFront(int val){
        if(f==-1 && b==-1){
            f=b=0;
            arr[f]=val;
        }
        else if(f==0 && b==arr.size()-1 ){
                 cout<<"Queue is full"<<endl;  
                 return; 
        }
        else if(f==b+1){
            cout<<"Queue is full"<<endl;  
                 return; 
        }
        else if(f==0){
            f=arr.size()-1;
            arr[f]=val;
        }
        else{
            f--;
            arr[f]=val;
        }

    }
    void enqueBack(int val){
        if(f==-1 && b==-1){
            f=b=0;
            arr[b]=val;
        }
         else if(f==0 && b==arr.size()-1 ){
                 cout<<"Queue is full"<<endl;  
                 return; 
        }
        else if(f==b+1){
            cout<<"Queue is full"<<endl;  
                 return; 
        }
        else if(b==arr.size()-1){
           b=0;
            arr[b]=val;
        }
        else{
            b++;
            arr[b]=val;
        }
    }
    void dequeFront(){
        if(f==-1 && b==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(f==b) f=b=-1;
        else if(f=arr.size()-1) f=0;
        else f++;
    }
    void dequeBack(){
        if(f==-1 && b==-1){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else if(f==b) f=b=-1;
        else if(b=0) b=arr.size()-1;
        else b--;
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
    DEQUE dq(4);
    
    dq.enqueFront(2);
    dq.enqueFront(5);
    dq.enqueBack(-1);
    dq.enqueBack(0);
    dq.enqueFront(7);
    dq.display();
    dq.enqueFront(2);
    
}