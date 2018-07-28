#include <bits/stdc++.h>

using namespace std;


template<typename T>
void printArray(T v, int len)
{
    for (int i=0; i<len; ++i) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

struct P {
    int x, y;
    bool operator<(const P &p) {
        if (x != p.x) return x < p.x;
        else return y < p.y;
    }
};


bool comp(string a, string b) {
    if (a.size() != b.size()) return a.size() < b.size();
    return a < b;
}

int main(void)
{
    // c++ 11 way to initialize
    vector<int> v = {4, 2, 5, 3, 5, 8, 3};
    cout << "Original array: \n";
    for (auto e : v) {
        cout << e << " ";
    }
    cout << "\n";
    cout << "Sort array in different way: \n";
    sort(v.begin(), v.end());
    printArray(v, (int)v.size());
    // reverse sort
    sort(v.rbegin(), v.rend());
    printArray(v, (int)v.size());
    // array
    int n = 7;
    int a[] = {4, 2, 5, 3, 5, 8, 3};
    sort(a, a + n);
    printArray(a, n);
    // sort string
    string s = "monkey";
    cout << s << "\n";
    sort(s.begin(), s.end());
    printArray(s, (int)s.length());

    // sort when struct has operator func

    // sort using comparson functions
    vector<string> vs = {"abc", "fewfwefe", "c"};
    sort(vs.begin(), vs.end(), comp);
    printArray(vs, (int)vs.size());
    return 0;
}

