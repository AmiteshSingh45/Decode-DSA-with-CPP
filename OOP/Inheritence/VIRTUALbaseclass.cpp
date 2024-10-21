#include<iostream>
using namespace std;

/*
student->Test
student->sports
test->result
sports->result
*/


class student{
    protected:
       int roll;
    public:

      void setnumb(int a){
        roll=a;
      }

      void getnumb(){
        cout<<"your Roll number is :"<<roll<<endl;
      }
};

class test:virtual public student{
    protected:
       float maths,physics;
    public:

       void set_marks(int a,int b){
        maths=a;
        physics=b;
       }

       void get_marks(){
        cout<<"maths :"<<maths<<endl;
        cout<<"physics :"<<physics<<endl;
       }
};

class sports:virtual public student{
    protected:
       float score;
    public:
     void set_score(int a){
        score=a;
     }
     void get_score(){
        cout<<"Score :"<<score<<endl;
     }
};

class result:public test,public sports{
    protected:
       float total;
    public:
       void display(){
            getnumb();
            get_marks();
            get_score();
            total=maths+physics+score;
            cout<<"total marks is: "<<endl;
            cout<<total<<endl;
       }
};

int main (){
    result Amitesh;
    Amitesh.setnumb(39);
    Amitesh.set_marks(98,89);
    Amitesh.set_score(8);
    Amitesh.display();

}

