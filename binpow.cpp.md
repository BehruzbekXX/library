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
  bundledCode: "#line 1 \"binpow.cpp\"\nlong long binpow(long long a, long long b,\
    \ long long m) {\r\n    a %= m;\r\n    long long res = 1;\r\n    while (b > 0)\
    \ {\r\n        if (b & 1)\r\n            res = res * a % m;\r\n        a = a *\
    \ a % m;\r\n        b >>= 1;\r\n    }\r\n    return res;\r\n}\n"
  code: "long long binpow(long long a, long long b, long long m) {\r\n    a %= m;\r\
    \n    long long res = 1;\r\n    while (b > 0) {\r\n        if (b & 1)\r\n    \
    \        res = res * a % m;\r\n        a = a * a % m;\r\n        b >>= 1;\r\n\
    \    }\r\n    return res;\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: binpow.cpp
  requiredBy: []
  timestamp: '2024-08-21 08:18:23+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: binpow.cpp
layout: document
redirect_from:
- /library/binpow.cpp
- /library/binpow.cpp.html
title: binpow.cpp
---
