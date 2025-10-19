# ScanFlt-C

A lightweight, safe, and user-friendly input library for C programming language Scanf Filter Library. Provides robust input validation for integers, floats, doubles, characters, and strings with comprehensive error handling.

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Installation](#installation)
- [API Reference](#api-reference)
- [License](#license)

## 🚀 Overview

ScanFlt-C is a comprehensive input handling library designed to make C programming safer and more user-friendly. It eliminates common issues with standard C input functions like `scanf()` by providing:

- **Automatic input validation**
- **Buffer overflow protection**
- **Type-safe conversions**
- **User-friendly error messages**
- **Optional prompt system**

Whether you're building console applications, educational tools, or production software, ScanFlt-C ensures your input handling is robust and secure.

## ✨ Features

### 🛡️ Safety & Security
- **Buffer Overflow Protection**: Automatic buffer size checking
- **Input Validation**: Comprehensive type and range checking
- **Memory Safety**: Safe string handling and pointer validation

### 🔄 Robust Input Handling
- **Automatic Retry**: Invalid inputs automatically trigger retry prompts
- **Error Recovery**: Clears input buffer on errors to prevent infinite loops
- **Type Conversion**: Safe conversion between string and numeric types

### 💬 User Experience
- **Optional Prompts**: All functions support optional message parameters
- **Clear Error Messages**: Descriptive feedback for invalid inputs
- **Empty Input Handling**: Proper validation for empty inputs

### 📝 Type Support
- **Integers**: Full `int` range with overflow checking
- **Floating Points**: `float` and `double` with precision handling
- **Characters**: Single character input with validation
- **Strings**: Safe string input with buffer size management

## 📥 Installation

### Method 1: Direct Include (Recommended for small projects)

1. Download the `scanflt.h` header file
2. Place it in your project directory


3. Include it in your C files:

```c
#include "scanflt.h"
```
### Method 2: By Clonning repository
1. type `git clone 
https://github.com/its-mohitkumar-7/scanflt-c.git` in terminal of your project's location.
2. include `#include"scanflt.h header` file in your code file (make sure use ****" "****).

## 📚API Reference

| Function | Description | Parameters |
|---------------|---------------------|----------------------|
| getint()  | Read integer input | int* val, const char* msg |
| getfloat()  | Read float input  | float* val, const char* msg |
| getdouble() | Read double input | double* val, const char* msg |
|    getch()  | Read single character input | char* val, const char* msg | 
| getstr()    | Read string input | char* val, const char* msg |
getstrbuff() | Read string with custom buffer | char* buf, size_t size, const char* msg |
----------------------------------------------------------------------------------------------------------
## 📄License

This project is licensed under the MIT License - see the LICENSE_file file for details.

```MIT License

Copyright (c) 2025 Mohit Kumar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.```
