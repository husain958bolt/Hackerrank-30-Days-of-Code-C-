#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count;
    cin >> count;
    while (count--) {
        string str;
        getline(cin >> ws, str);
        int i = 0;
        string res1, res2, res;
        for (i = 0; i < str.length(); i++)
            (i%2 == 0) ? res1.append(string(1,str.at(i))) : res2.append(string(1,str.at(i)));
        cout << res1 << " " << res2 << endl;
    }
    
    return 0;
}
