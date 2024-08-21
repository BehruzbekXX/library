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
  bundledCode: "#line 1 \"miller.cpp\"\nlong long binpow(long long a, long long b,\
    \ long long m) {\r\n    a %= m;\r\n    long long res = 1;\r\n    while (b > 0)\
    \ {\r\n        if (b & 1)\r\n            res = res * a % m;\r\n        a = a *\
    \ a % m;\r\n        b >>= 1;\r\n    }\r\n    return res;\r\n}\r\nbool miillerTest(int\
    \ d, int n)\r\n{\r\n    int a = 2 + rand() % (n - 4);\r\n    int x = binpow(a,\
    \ d, n);\r\n\r\n    if (x == 1  || x == n-1)\r\n        return true;\r\n    while\
    \ (d != n-1)\r\n    {\r\n        x = (x * x) % n;\r\n        d *= 2;\r\n\r\n \
    \       if (x == 1)      return false;\r\n        if (x == n-1)    return true;\r\
    \n    }\r\n\r\n    return false;\r\n}\r\nbool isp(int n, int k)\r\n{if (n <= 1\
    \ || n == 4)  return false;\r\n    if (n <= 3) return true;\r\n    int d = n -\
    \ 1;\r\n    while (d % 2 == 0)\r\n        d /= 2;\r\n    for (int i = 0; i < k;\
    \ i++)\r\n        if (!miillerTest(d, n))\r\n            return false;\r\n   \
    \ return true;\r\n}\n"
  code: "long long binpow(long long a, long long b, long long m) {\r\n    a %= m;\r\
    \n    long long res = 1;\r\n    while (b > 0) {\r\n        if (b & 1)\r\n    \
    \        res = res * a % m;\r\n        a = a * a % m;\r\n        b >>= 1;\r\n\
    \    }\r\n    return res;\r\n}\r\nbool miillerTest(int d, int n)\r\n{\r\n    int\
    \ a = 2 + rand() % (n - 4);\r\n    int x = binpow(a, d, n);\r\n\r\n    if (x ==\
    \ 1  || x == n-1)\r\n        return true;\r\n    while (d != n-1)\r\n    {\r\n\
    \        x = (x * x) % n;\r\n        d *= 2;\r\n\r\n        if (x == 1)      return\
    \ false;\r\n        if (x == n-1)    return true;\r\n    }\r\n\r\n    return false;\r\
    \n}\r\nbool isp(int n, int k)\r\n{if (n <= 1 || n == 4)  return false;\r\n   \
    \ if (n <= 3) return true;\r\n    int d = n - 1;\r\n    while (d % 2 == 0)\r\n\
    \        d /= 2;\r\n    for (int i = 0; i < k; i++)\r\n        if (!miillerTest(d,\
    \ n))\r\n            return false;\r\n    return true;\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: miller.cpp
  requiredBy: []
  timestamp: '2024-08-21 08:19:20+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: miller.cpp
layout: document
redirect_from:
- /library/miller.cpp
- /library/miller.cpp.html
title: miller.cpp
---
