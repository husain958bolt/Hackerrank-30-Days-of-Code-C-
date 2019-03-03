#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n ;

    map<string,string> phonebook;
    int i;
    string name;
    string number;
    for (i=0; i<n; i++) {
        cin >> name;
        cin >> number;
        if (phonebook.count(name) == 0)
          phonebook[name] = number;
    }
  
    string toSearch;
    while (cin >> toSearch) {
        if (phonebook.find(toSearch) == phonebook.end())
            cout << "Not found" << endl;
        else
            cout << toSearch << "=" << phonebook[toSearch] << endl;
    }
    return 0;
}
