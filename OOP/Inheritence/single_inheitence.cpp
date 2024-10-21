#include<iostream>
using namespace std;

class scotty{   // parent class
    public:
       int topspeed;
       float mileage;
};

class bike: public scotty{ // child class
    public:
      int gears;
};

int main () {
    bike b1;
    b1.topspeed=100;
    b1.mileage=34;    // we can access all the attributes of scotty...
}