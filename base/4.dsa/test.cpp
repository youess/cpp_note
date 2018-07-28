#include <bits/stdc++.h>


using namespace std;


int main(void)
{
    string a = "hatti";
    string b = a + a;
    cout << a << " " << b << "\n";

    string c = b.substr(8, 4);
    cout << c << "\n";

    set<int> s;
    s.insert(2);
    s.insert(2);
    s.insert(3);
    cout << s.count(2) << "\n";
    return 0;
}

