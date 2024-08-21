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
  bundledCode: "#line 1 \"Z-Function.cpp\"\ntemplate<typename T>\r\nvector<int> z_function(T\
    \ s) {\r\n    int n = s.size();\r\n    vector<int> z(n);\r\n    int l = 0, r =\
    \ 0;\r\n    for(int i = 1; i < n; i++) {\r\n        if(i < r) {\r\n          \
    \  z[i] = min(r - i, z[i - l]);\r\n        }\r\n        while(i + z[i] < n &&\
    \ s[z[i]] == s[i + z[i]]) {\r\n            z[i]++;\r\n        }\r\n        if(i\
    \ + z[i] > r) {\r\n            l = i;\r\n            r = i + z[i];\r\n       \
    \ }\r\n    }\r\n    return z;\r\n}\n"
  code: "template<typename T>\r\nvector<int> z_function(T s) {\r\n    int n = s.size();\r\
    \n    vector<int> z(n);\r\n    int l = 0, r = 0;\r\n    for(int i = 1; i < n;\
    \ i++) {\r\n        if(i < r) {\r\n            z[i] = min(r - i, z[i - l]);\r\n\
    \        }\r\n        while(i + z[i] < n && s[z[i]] == s[i + z[i]]) {\r\n    \
    \        z[i]++;\r\n        }\r\n        if(i + z[i] > r) {\r\n            l =\
    \ i;\r\n            r = i + z[i];\r\n        }\r\n    }\r\n    return z;\r\n}"
  dependsOn: []
  isVerificationFile: false
  path: Z-Function.cpp
  requiredBy: []
  timestamp: '2024-08-21 08:19:20+05:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: Z-Function.cpp
layout: document
redirect_from:
- /library/Z-Function.cpp
- /library/Z-Function.cpp.html
title: Z-Function.cpp
---
