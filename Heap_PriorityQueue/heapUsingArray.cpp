#include<iostream>
using namespace std;

class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++; 
        // swaping of i with parent if arr[i] < arr[parent] 
        while (i!=1)
        {
           int parent=i/2;
           if(arr[i]<arr[parent]){
            swap(arr[i],arr[parent]);
            i=parent;
           }
           else break;
        }
    }

    void pop(){
        idx--;
        arr[1]=arr[idx];

        //Rearrangement
        int i=1;
        while(true){
            int left=2*i;
            int right=2*i+1;
            if(left>idx-1) break;
            if(right>idx-1){
                if(arr[i]>arr[left]){
                 swap(arr[i],arr[left]);
                  i=left;
                }
                break;
            }
            if(arr[left]<arr[right]) {
                if(arr[i]>arr[left]){
                 swap(arr[i],arr[left]);
                  i=left;
                }
                else break; 
            }
            else{
                if(arr[i]>arr[right]){
                 swap(arr[i],arr[right]);
                  i=right;
                }
                else break; 
            }
        }
    }
    int size(){
        return idx-1;
    }
    void display(){
        for(int i=1;i<idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main () {
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(6);
    cout<<pq.size()<<endl;
    pq.push(40);
    pq.push(5);
    pq.display();
    pq.pop();
    pq.display();
    pq.pop();
    pq.display();
    cout<<pq.top();
}