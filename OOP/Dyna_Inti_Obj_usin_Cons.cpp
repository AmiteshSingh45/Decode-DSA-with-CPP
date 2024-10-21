#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int year;
    float intrestrate;
    float returnvalue;
    public:
       BankDeposit(){}; // if we donot give value then also it become ready..
       BankDeposit(int p,int y,float r); // r can be of like 0.09
       BankDeposit(int p,int y,int r); // r is in percentage.. 

       void show();   
};

BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    year = y;
    intrestrate = r;

    returnvalue = principal;
    for (int i = 0; i < year; i++) {
        returnvalue = returnvalue * (1 + intrestrate);
    }
}

BankDeposit :: BankDeposit(int p,int y,int r){   // ::=scope resolution
    principal=p;
    year=y;
    intrestrate=r;

    intrestrate=float(r)/100; // to convert it into 0.89 ...type
    returnvalue=principal;
    for(int i=0;i<y;i++){
        returnvalue=returnvalue*(intrestrate+1);
    }

}

void BankDeposit :: show(){
    cout<<endl<<"principal amount was: "<<principal<<endl
    <<"return value after "<<year<<endl
    <<"is "<<returnvalue<<endl;
}

int main () {
    BankDeposit bd1,bd2,bd3;

    int p,y;
    float R;
    int r;

    cout<<"Enter the principal,year,rate: "<<endl;
    cin>>p>>y>>r;

    bd1=BankDeposit(p,y,r);
    bd1.show();


    cout<<"Enter the principal,year,rate: "<<endl;
    cin>>p>>y>>r;
    bd2=BankDeposit(p,y,R);
    bd2.show();
    return 0;
}