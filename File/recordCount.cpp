#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main () {
    string line;
    int recordcount=0;
    ifstream i_file("record.txt");
    while(getline(i_file,line)){
      recordcount++;
    }
    cout<<recordcount;
    i_file.close();
}