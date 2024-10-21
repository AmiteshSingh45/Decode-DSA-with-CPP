#include<iostream>
using namespace std;

class player{
    public:
    int score;
    int health;
    char name[20];
};

int main () {
    player Amitesh;
    Amitesh.score=10;
    Amitesh.health=100;
    // Amitesh.name="Name";
    cout<<Amitesh.health<<endl;

    player Panditji;
    Panditji.health=34;

    cout<<Panditji.health;
}