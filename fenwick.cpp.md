---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"fenwick.cpp\"\n//Fenwick<T> a(vector<T> arr);\r\n//Fenwick<T>\
    \ a(n);\r\n//Supports MIN,MAX 0..R , with update\r\n//Suports SUM [L,R] with point\
    \ update\r\ntemplate<typename T> struct Fenwick {\r\n    vector<T> bit;\r\n  \
    \  int n;\r\n    const int INF = 1e9 + 1;\r\n    int op(int x,int y){\r\n    \
    \    int z = (x + y);\r\n        return z;\r\n    }\r\n    Fenwick(int n) {\r\n\
    \        this->n = n;\r\n        bit.assign(n + 1, 0);//may change, INF for min,-INF\
    \ for max\r\n    }\r\n    Fenwick(vector<T> const &a) : Fenwick(a.size()) {\r\n\
    \        for (size_t i = 0; i < a.size(); i++)\r\n            add(i, a[i]);\r\n\
    \    }\r\n    T get(int r) {\r\n        int res = 0;//may change, INF for min,-INF\
    \ for max\r\n        for (; r >= 0; r = (r & (r + 1)) - 1)\r\n            res\
    \ = op(res,bit[r]);\r\n        return res;\r\n    }\r\n    T get(int l, int r)\
    \ {\r\n        return get(r) - get(l - 1);\r\n    }\r\n    void add(int idx, T\
    \ delta) {\r\n        for (; idx < n; idx = idx | (idx + 1))\r\n            bit[idx]\
    \ = op(bit[idx],delta);\r\n    }\r\n};\r\n"
  code: "//Fenwick<T> a(vector<T> arr);\r\n//Fenwick<T> a(n);\r\n//Supports MIN,MAX\
    \ 0..R , with update\r\n//Suports SUM [L,R] with point update\r\ntemplate<typename\
    \ T> struct Fenwick {\r\n    vector<T> bit;\r\n    int n;\r\n    const int INF\
    \ = 1e9 + 1;\r\n    int op(int x,int y){\r\n        int z = (x + y);\r\n     \
    \   return z;\r\n    }\r\n    Fenwick(int n) {\r\n        this->n = n;\r\n   \
    \     bit.assign(n + 1, 0);//may change, INF for min,-INF for max\r\n    }\r\n\
    \    Fenwick(vector<T> const &a) : Fenwick(a.size()) {\r\n        for (size_t\
    \ i = 0; i < a.size(); i++)\r\n            add(i, a[i]);\r\n    }\r\n    T get(int\
    \ r) {\r\n        int res = 0;//may change, INF for min,-INF for max\r\n     \
    \   for (; r >= 0; r = (r & (r + 1)) - 1)\r\n            res = op(res,bit[r]);\r\
    \n        return res;\r\n    }\r\n    T get(int l, int r) {\r\n        return\
    \ get(r) - get(l - 1);\r\n    }\r\n    void add(int idx, T delta) {\r\n      \
    \  for (; idx < n; idx = idx | (idx + 1))\r\n            bit[idx] = op(bit[idx],delta);\r\
    \n    }\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: fenwick.cpp
  requiredBy: []
  timestamp: '2024-08-21 08:19:20+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: fenwick.cpp
layout: document
redirect_from:
- /library/fenwick.cpp
- /library/fenwick.cpp.html
title: fenwick.cpp
---
