#include<iostream>
#include<fstream>

using namespace std;

/*the useful classes used for working with file 
1.>fstreambase base class
2.>ifstream   ->derived from fstream  
3.>ofstream
*/

/*therre are two ways to open file 
1. using constructor
2.using the member function open()
*/

int main () {
    string s="harry bhai jindabad";
    //opening file using constructor and writing to it
    ofstream out("basic_Sample.txt");
    out<<s;
    
    string st;
    //opening file using constructor and  reading to it
    ifstream in("basic_sampleb.txt");
    getline(in,st);
    
    
    cout<<st;



}