#include<iostream>
using namespace std;

class player{
    private:
    int score;
    int health;
    
    public:

    void setscore(int s){
        score=s;
    }

    void sethealth(int h){
        cout<<"koi health change kar diya";  
        health=h;
    }

    void getscore(){
        cout<<"koi score change kar diya";
        cout<<score<<endl;
    }

    void gethealth(){
        cout<<health<<endl;
    }


};

int main () {
    player harsh;
    harsh.sethealth(10);
    harsh.setscore(20);

    harsh.gethealth();
    harsh.getscore();


}