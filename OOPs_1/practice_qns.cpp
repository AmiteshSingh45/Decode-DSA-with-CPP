#include<iostream>
using namespace std;

class book {
public:
    char name;
    int price;
    int no_page;

    int countbook(int p){
        if(price<p) return 1;
        else return 0;
        
    }

    bool isbookpresent(string title){
        if(name==title) return true;
        else return false;
    }

};

int main () {
  book Avenger;
  Avenger.name="A";
  Avenger.price=300;
  Avenger.no_page=479;

 cout<<Avenger.countbook(133);
 cout<<Avenger.isbookpresent('p');
  
}

