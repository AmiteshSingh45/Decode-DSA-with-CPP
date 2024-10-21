#include<iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class player {
private:
    int age;
    int score;
    int health;
    bool isalive;
    Gun bandook;    // object of outside class..

    class helmet{
        int hp;
        int level;
    };
    
    public:
    void sethp(int hp){
        this->hp = hp;
    }

    int gethp(){
        return hp;
    }
public:
    void setage(int age){
        this->age=age;
    }

    void setscore(int score){
        this->score=score;
    }

    void sethealth(int health){
        this->health=health;
    }

    void setisalive(bool isalive){
        this->isalive=isalive;
    }
    Gun getGun(){
        return bandook;
    }

    int getage(){
         return age;
    }

    int getscore(){
        return score;
    }

    int gethealth(){
        return health;
    }

    bool getisalive(){
        return isalive;
    }

    void setGun(Gun bandook){
        this->bandook=bandook;
    }
};


int main () {

   Gun akm;
   akm.ammo=100;
   akm.damage=50;
   akm.scope=4;

   Gun awm;
   awm.ammo=150;
   awm.damage=60;
   awm.scope=8;


   player mike;
   mike.setage(13);
   mike.sethealth(10);
   mike.setscore(20);
   mike.setisalive(true);
   mike.setGun(awm);

   player will;
   will.setage(12);
   will.sethealth(20);
   will.setscore(30);
   will.setisalive(true);
   will.setGun(akm);   
}

