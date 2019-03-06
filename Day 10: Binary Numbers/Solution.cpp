#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int res = 0;
    int count = 0;
    while (n) {
        if (n&1)
            ++count;
        else
            count = 0;
        res = std::max(res, count);

        n >>= 1; 
    }

    cout << res << endl;
    return 0;
}
