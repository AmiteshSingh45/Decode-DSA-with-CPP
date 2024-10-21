#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main () {
    ifstream i_file("data.txt");
    ifstream o_file("newfile.txt");

    ofstream merge_file("merge.txt");
    
    string line;
    while(getline(i_file,line)){
        merge_file<<line<<endl;
    }

    while(getline(o_file,line)){
        merge_file<<line<<endl;
    }

    i_file.close();
    o_file.close();
    merge_file.close();
}