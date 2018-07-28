
# 标准库中的数据结构

## 1. 动态数组

+ **声明初始化**

```{c}
vector<int> v;
v.push_back(3);
v.push_back(5);
v.push_back(10);
v.pop_back();   // 去除最后一个元素

// another way in c++ 11;
vector<int> v = {3, 5};

// size 10, initial value 0
vector<int> v(10);
vector<int> v(10, 5);   // initial value 5
```

+ **获取**

```{c}

v.back();    // 获取最后一个元素

for (int i=0; i < v.size(); ++i) {
    cout << v[i] << " ";
}

// another way
for (auto x: v) {
    cout << x << " ";
}
```

+ **字符数组**

```{c}
string a = "hatti";
string b = a + a;        // 字符串串接

b[5] = 'v';             // 修改字符

string c = b.substr(3, 4);     // 获取从位置3开始，长度为4的字符串, 不足4就到数组末尾。
string d = b.substr(8, 4);     // 获取从位置3开始，长度为4的字符串, 不足4就到数组末尾。 ti
```

## 2. 集合

+ **set**, O(logn), balanced binary tree
+ **unordered_set**, O(1) on average, hashing

```
set<int> s;
s.insert(3);   // 插入
s.insert(2);
s.insert(2);   // normal
s.insert(5);

s.count(3);   // 1
s.count(2);   // 1
s.count(4);   // 0
s.erase(3);   // 删除3

s.size();     // 2

// 遍历
for (auto x: s) {
}

```
    
+ **multiset**, 多个数的集合

```{c}
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);
s.insert(5);

s.count(5);   // 4
s.erase(s.find(5));    // 只删除一个
s.count(5);   // 3
s.erase(5);
s.count(5);   // 0
```

## 3. Map 映射表

```{c}
map<string, int> m;
m["monkey"] = 4;
m["banana"] = 3;
m["harpsichord"] = 9;

m["monkey"]      // 4
m["aybabtu"]     // 0, 如果key不存在，加入map并初始化值为0

// 遍历key和value
for (auto x: m) {
    x.first;   // key
    x.second;  // value
}
```

## 4. 迭代器和range

iterators: begin (point to 0), end (point to last + 1), [begin, end) -> range

```
// 常见的函数
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
random_shuffle(v.begin(), v.end());
```

集合迭代器

```
set<int>::iterator it = s.begin();
// or
auto it = s.begin();


// 遍历
for (auto it = s.begin(); it != s.end(); it++) {
    cout << *it << " ";
}

// 查找
auto it = s.find(x);
if (it == s.end()) {
    // x is not found
}

// lower_bound, upper_bound,      // 不支持unordered_set
auto it = s.lower_bound(x);       // 返回迭代器指向 at least x
auto it = s.upper_bound(x);       // 返回迭代器指向 larger than x, but smallest
```

## 5. 其他结构

### 5.1 位数组

值是0 或 1的数组

```
bitset<10> s;
s[1] = 1;
s[3] = 1;
s[4] = 1;
s[7] = 1;

s[4];   // 1
s[5];   // 0

// another way to initialize
bitset<10> s(string("0010011010"));   // from right to left


s.count();  // 4


// 位操作
bitset<10> a(string("0010110110"));
bitset<10> b(string("1011011000"));

(a&b);   // 0010010000
(a|b);   // 1011111110
(a^b);   // 1001101110
```

### 5.2 deque. 动态数组，能够在两端有效的添加元素

```
deque<int> d;

d.push_back(5);  // [5]
d.push_back(2);  // [5, 2]
d.push_front(3); // [3, 5, 2]
d.pop_back();    // [3, 5]
d.pop_front();   // [5]
```

### 5.3 栈stack. 栈顶的元素是O(1), 先进后出

```
stack<int> s;
s.push(3);
s.push(2);
s.push(5);
s.top();   // 5
s.pop();
s.top();   // 2
```

### 5.4 队列queue, 添加尾部，删除头部，O(1), 先进先出

```
queue<int> q;

q.push(3);
q.push(2);
q.push(5);
q.front();   // 3
q.pop();
q.front();   // 2
```

### 5.5 优先级队列.

插入，删除O(logn), 获取O(1)

一般用堆实现，比平衡二叉树在有序集合中要容易得多

```
priority_queue<int> q;

q.push(3);
q.push(5);
q.push(7);
q.push(2);

q.top();   // 7

q.pop();
q.top();   // 5

q.pop();
q.push(6);
q.top();   // 6

// support finding and removing the smallest element
priority_queue<int, vector<int>, greater<int>> q;
```


### 5.6 policy-based 数据结构

没在g++标准库中, g++额外提供的一些数据结构

```
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

// indexed_set
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set;

indexed_set s;
s.insert(2);
s.insert(3);
s.insert(7);
s.insert(9);

auto x = s.find_by_order(2);    // like s[2]
*x    // 7

s.order_of_key(7)    // 2

```
