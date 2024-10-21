#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main () {
    string word;
    int countwords=0;
    ifstream i_file("wordcount.txt");
    while(i_file>>word){
      countwords++;
    }
    cout<<countwords;
    i_file.close();
}