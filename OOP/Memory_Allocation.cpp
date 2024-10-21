#include<iostream>
using namespace std;

class shop {
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
       void initcounter(void) {counter=0;}
       void setprice(void);
       void displayprice(void);
};

void shop ::setprice(void){
    cout<<"Enter Id of your item: "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop ::displayprice(void){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id "<<itemId[i]<<" is"<<itemPrice[i]<<endl;
    }
}


int main () {
  shop dukan;
  dukan.initcounter();
  dukan.setprice();
  dukan.setprice();
  dukan.setprice();

  dukan.displayprice();

}