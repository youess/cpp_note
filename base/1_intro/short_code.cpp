#include <bits/stdc++.h>

using namespace std;


// type names
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

// Macros
#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i, a, b) for (int i=a; i<=b; ++i)

// unexpected errors may happened.
// SQ(3+3)  equal to 3+3*3+3
#define SQ1(a) a*a

// more safe
#define SQ2(a) (a)*(a)


int main(void)
{
    vector<pi> v;
    v.PB(MP(0, 1));
    v.PB(MP(1, 2));
    v.PB(MP(2, 3));
    // comparison of integers of different signs: 'int' and 'std::vector::size_type' (aka 'unsigned long')
    // for (int i=0; i<v.size();++i)
    for (decltype(v.size()) i=0; i < v.size(); ++i) {
        cout << "first element: " << v[i].F << "; second element: " << v[i].S << "\n";
    }

    // for loop short
    int n(10);
    REP(j, 1, n) {
        cout << j << " ";
    }
    cout << "\n";

    cout << "SQ1(3+3) = " << SQ1(3+3) << "\n";
    cout << "SQ2(3+3) = " << SQ2(3+3) << "\n";
    return 0;
}
