#include<iostream>
using namespace std;

class player {
private:
    int age;
    int score;
    int health;
    bool isalive;

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
};

int addscore(player a,player b){                    // passing class to function....
      return a.getscore() + b.getscore();
}

player getmaxscore(player a,player b){
    if(a.getscore()>b.getscore()) return a;
    else return b; 
}

int main () {
   player mike;
   mike.setage(13);
   mike.sethealth(10);
   mike.setscore(20);
   mike.setisalive(true);

   player will;
   will.setage(12);
   will.sethealth(20);
   will.setscore(30);
   will.setisalive(true);

  cout<<addscore(mike,will); // 50
  player dustin=getmaxscore(mike,will); // dustin= player which is having maximum score...
  cout<<dustin.getscore(); // dustin me player which is having max score
  
}

