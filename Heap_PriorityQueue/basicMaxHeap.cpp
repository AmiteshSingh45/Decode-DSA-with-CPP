#include<iostream>
#include<queue>
using namespace std;


int main(){
    priority_queue<int> pq;
    pq.push(10);
    pq.push(81);
    pq.push(-2);
    pq.push(6);
    cout<<pq.top()<<endl;  //  gives max elem 
    
}