// free the momory

#include<iostream>
using namespace std;

// Destructor never takes an argument nor it returns
int count=0;
class num{
    public:
       num(){
        count++;
        cout<<"constructor called for object number: "<<count<<endl;
       }

       ~num(){
        cout<<"Destructor called for object number: "<<count<<endl;
        count--;
       }
};
int main () {
    cout<<"we are inside main function"<<endl;
    cout<<"Creating first object"<<endl;
    
    num n1;
    // agar n1 ka aage koi kam nahi hai to destructor isse destroy kar dega....
    {
        cout<<"Entering in this block "<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Exiting main function"<<endl;
}