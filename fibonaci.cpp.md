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
  bundledCode: "#line 1 \"fibonaci.cpp\"\nconst long M = 1000000007; // modulo\r\n\
    map<long, long> F;\r\n\r\nlong f(long n) {\r\n    if (F.count(n)) return F[n];\r\
    \n    long k=n/2;\r\n    if (n%2==0) { // n=2*k\r\n        return F[n] = (f(k)*f(k)\
    \ + f(k-1)*f(k-1)) % M;\r\n    } else { // n=2*k+1\r\n        return F[n] = (f(k)*f(k+1)\
    \ + f(k-1)*f(k)) % M;\r\n    }\r\n}\r\nF[0]=F[1]=1;\r\n\r\n"
  code: "const long M = 1000000007; // modulo\r\nmap<long, long> F;\r\n\r\nlong f(long\
    \ n) {\r\n    if (F.count(n)) return F[n];\r\n    long k=n/2;\r\n    if (n%2==0)\
    \ { // n=2*k\r\n        return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;\r\n   \
    \ } else { // n=2*k+1\r\n        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;\r\
    \n    }\r\n}\r\nF[0]=F[1]=1;\r\n\r\n"
  dependsOn: []
  isVerificationFile: false
  path: fibonaci.cpp
  requiredBy: []
  timestamp: '2024-08-21 08:19:20+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: fibonaci.cpp
layout: document
redirect_from:
- /library/fibonaci.cpp
- /library/fibonaci.cpp.html
title: fibonaci.cpp
---
