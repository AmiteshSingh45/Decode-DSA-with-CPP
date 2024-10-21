#include<iostream>
#include<fstream>

using namespace std;

int main () {
    //connecting our file to hout stream
    ofstream hout("basic_sampleb.txt");

    //creating a name string and filling it with string name entered by the user
    cout<<"enter your name : ";
    string name;
    getline(cin,name);

    //writing the input string to the file
    hout<<name;
    //closing the file
    hout.close();


    ifstream hin("basic_sampleb.txt");
    string content;
    getline(hin,content);

    cout<<content;
     
    
}