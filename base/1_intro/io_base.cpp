#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    // 不兼容c的输入输出，所以后续程序不能用printf, scanf
    ios::sync_with_stdio(false);
    // 默认cin绑定的是cout, 每次执行<<操作符的时候要调用flush, 会增加io负担,
    // 通过下面的操作解除cin和cout绑定，进一步加快执行效率
    cin.tie(nullptr);

    int a, b;
    string x;
    cin >> a >> b >> x;  // 假定变量是按照空格或者换行符隔开的，分隔符是可以多个的

    cout << a << " " << b << " " << x << "\n";  // 不用endl，因为其导致刷新操作，\n快多了
    return 0;
}
