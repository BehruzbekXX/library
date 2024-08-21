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
  bundledCode: "#line 1 \"sparse_table.cpp\"\ntemplate<typename T> struct sparse_table\
    \ {\r\n    vector<vector<T>> rmq;\r\n    T calc(T a, T b) {\r\n        return\
    \ std::min(a, b);\r\n    }\r\n    void build(vector<T> &a) {\r\n        int n\
    \ = a.size();\r\n        int ln = 31 - __builtin_clz(n);\r\n        if ((1 <<\
    \ ln) < n) {\r\n            ln++;\r\n        }\r\n        rmq.assign(ln + 1, vector<T>(n));\r\
    \n        for (int j = 0; j <= ln; j++) {\r\n            for (int i = 0; i <=\
    \ n - (1 << j); i++) {\r\n                if (j > 0) {\r\n                   \
    \ rmq[j][i] = calc(rmq[j - 1][i], rmq[j - 1][i + (1 << (j - 1))]);\r\n       \
    \         } else {\r\n                    rmq[j][i] = a[i];\r\n              \
    \  }\r\n            }\r\n        }\r\n    }\r\n    T get(int l, int r) {\r\n \
    \       assert(l <= r);\r\n        int x = 31 - __builtin_clz(r - l + 1);\r\n\
    \        return calc(rmq[x][l], rmq[x][r - (1 << x) + 1]);\r\n    }\r\n};\n"
  code: "template<typename T> struct sparse_table {\r\n    vector<vector<T>> rmq;\r\
    \n    T calc(T a, T b) {\r\n        return std::min(a, b);\r\n    }\r\n    void\
    \ build(vector<T> &a) {\r\n        int n = a.size();\r\n        int ln = 31 -\
    \ __builtin_clz(n);\r\n        if ((1 << ln) < n) {\r\n            ln++;\r\n \
    \       }\r\n        rmq.assign(ln + 1, vector<T>(n));\r\n        for (int j =\
    \ 0; j <= ln; j++) {\r\n            for (int i = 0; i <= n - (1 << j); i++) {\r\
    \n                if (j > 0) {\r\n                    rmq[j][i] = calc(rmq[j -\
    \ 1][i], rmq[j - 1][i + (1 << (j - 1))]);\r\n                } else {\r\n    \
    \                rmq[j][i] = a[i];\r\n                }\r\n            }\r\n \
    \       }\r\n    }\r\n    T get(int l, int r) {\r\n        assert(l <= r);\r\n\
    \        int x = 31 - __builtin_clz(r - l + 1);\r\n        return calc(rmq[x][l],\
    \ rmq[x][r - (1 << x) + 1]);\r\n    }\r\n};"
  dependsOn: []
  isVerificationFile: false
  path: sparse_table.cpp
  requiredBy: []
  timestamp: '2024-08-21 08:19:20+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: sparse_table.cpp
layout: document
redirect_from:
- /library/sparse_table.cpp
- /library/sparse_table.cpp.html
title: sparse_table.cpp
---
