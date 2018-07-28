#include <bits/stdc++.h>

using namespace std;

void test_cin1()
{
    string s;
    //while (getline(cin, s))   // 这种方式好些
    while (cin) {          // 不会判断最后一行换行符所以会多运行一行，要多加小心，**最好不用这种方式**
        getline(cin, s);   // 读取一整行
        cout << s << "\n";
    }
}

void test_cin2()
{
    string s;
    while (cin >> s) {
        cout << s << "\n";
    }
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // choice-1
    //test_cin1();
    // choice-2
    test_cin2();
    return 0;
}
