#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;
    Vector(){  //default constructor
        size=0;
        capacity=1;
        arr=new int[1]; // creating array of size 1
    }
    void add(int ele){
        if(size==capacity){
            capacity *= 2;  // double the capacity
            int* arr2=new int[capacity];
            // and then add the ele of arr 
            for(int i=0;i<=size;i++){
                arr2[i]=arr[i];
            }
            arr=arr2;
        }
        // if size is not eqal capacity
        arr[size++]=ele; 
    }

    void print(){
        for(int i=0;i<size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
    }

    int get(int idx){
        if(idx>size) cout<<"index is greater than size cannot get "<<idx;
        if(size==0)  cout<<"array is empty";
        return arr[idx];
    }

    void remove() {
        size--; // if arr is not empty
    }
};

int main (){
   Vector v; // default constructor


   cout<<v.size<<" "<<v.capacity<<endl; // 0 1
   v.add(10);
   v.print(); // 10


   cout<<v.size<<" "<<v.capacity<<endl; // 1 1
   v.add(5);
   v.print(); // 10 5


   cout<<v.size<<" "<<v.capacity<<endl; // 2 2 
   v.add(1);
   v.print(); // 10 5 1


   cout<<v.size<<" "<<v.capacity<<endl; // 3 4
   v.add(100);
   v.print(); // 10 5 1 100

   v.get(3);
}