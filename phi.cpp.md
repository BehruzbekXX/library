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
  bundledCode: "#line 1 \"phi.cpp\"\nint phi(int n){\r\n    int result = n;\r\n  \
    \  for(int i = 2;i * i <= n;++i){\r\n        if(n % i == 0){\r\n            result\
    \ -= result / i;\r\n            while(n % i == 0) n /= i;\r\n        }\r\n   \
    \ }\r\n    if(n > 1) result-= result / n;\r\n    return result;\r\n}\n"
  code: "int phi(int n){\r\n    int result = n;\r\n    for(int i = 2;i * i <= n;++i){\r\
    \n        if(n % i == 0){\r\n            result -= result / i;\r\n           \
    \ while(n % i == 0) n /= i;\r\n        }\r\n    }\r\n    if(n > 1) result-= result\
    \ / n;\r\n    return result;\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: phi.cpp
  requiredBy: []
  timestamp: '2024-08-21 08:19:20+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: phi.cpp
layout: document
redirect_from:
- /library/phi.cpp
- /library/phi.cpp.html
title: phi.cpp
---
