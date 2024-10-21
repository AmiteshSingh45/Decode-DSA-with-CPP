#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<string> v;
    v.push_back("flight");
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("sonu");
    v.push_back("amitesh");
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    int n = v.size();
    string first = v[0];
    string second = v[n - 1];
    string s = "";
    for (int i = 0; i < min(first.size(), second.size()); i++)
    {
        if (first[i] == second[i])
        {

            s += first[i];
        }
        else
        {
            cout << s << endl;
        }
    }

    cout << s << endl;
}
