#include<iostream>
#include<fstream>
using namespace std;

int main () {
    char ch;
    ifstream i_file("data.txt");
    ofstream o_file("newfile.txt");

    while(i_file.get(ch)){
        o_file.put(ch);
    }
    i_file.close();
    o_file.close();
}