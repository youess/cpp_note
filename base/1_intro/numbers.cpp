#include <bits/stdc++.h>

#define ll long long

using namespace std;


void factor_mod(int n, int m) {
    long long x = 1;
    for (int i=2; i<=n; ++i){
        x = (x*i) % m;
    }
    // n! mod m = (n mod m * (n-1) mod m * ... * 1 mod m) mod m
    // 并可以递归进行，从而返回数值范围在[0, m-1]
    cout << x % m << "\n";
}


int main(void)
{
    int a(1234567);
    ll b = a * a;     // wrong number
    cout << "wrong number when int multi: \t";
    cout << b << "\n";   // -557712591
    // solution change a type
    cout << "correct way by converting int to long long before multi: \t";
    b = (ll)a * a;       // 1524155677489
    cout << b << "\n";

    // mod(ular) arithmetic
    int d1(17);
    cout << d1 % 5 << "\n";  // 2
    int d2(19);
    cout << d2 % 5 << "\n";  // 4
    cout << (d1 + d2) % 5 << "\n";   // 1
    // equal to, same could apply to "-" and '*'
    cout << (d1 % 5 + d2 % 5) % 5 << "\n";   // 1
    // factor mod
    factor_mod(99, 5121);
    factor_mod(10, 99);

    int d3(-31);
    cout << d3 % 4 << "\n";   // 通常是负数或者0, 如果要时时保证正数
    cout << (d3 % 4 > 0 ? d3 % 4 : d3 % 4 + 4) << "\n";

    // float 32, double 64, long double 80 bit
    double x = 0.3 * 3 + 0.1;
    cout << "0.3 * 3 + 0.1 = " << x << "\n";   // 居然结果是1
    printf("%.20f\n", x);                      // 居然是0.99999999999999988898
    cout << setprecision(30) << x << "\n";     // 然后就同上出现问题了

    // 安全比较浮点数相同
    if (abs(x - 1) < 1e-9) {
        cout << "x equal to 1 due to float number round\n";
    }
    return 0;
}
