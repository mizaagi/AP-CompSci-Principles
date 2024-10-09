<h1>Handbook on Programming in C/C++</h1>

**AP Computer Science Principles 2023-2024**

FirstName LastName

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->




___





<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
-->




___





# 1. Compiling and Running

### GCC
To compile and run C++ code on a computer, you will need to install GCC. Once you do this, you can compile and run it by typing:
```sh
g++ -o hello.exe hello.cpp
hello.exe
```





___





# 2. Data Types

In addition to these keywords, there's also `const`, which makes a variable a constant.

```cpp
// Integer Data Types
char a = 255; // Character
int b = 2147483647; // Integer
short c = 32767; // A short number
long int d = 9223372036854775807;

// Floating-Point Data Types
float e = 3.4e+38; // Floating point #
double f = 1.7e+308; // Double floating point #
long double g = 1.1e+4932; // Long double floating point #

// Final keyword
const double pi = 3.14159
```





___





# 3. Console I/O

The easiest way to do I/O in C++ is to use `<iostream>`, which gives you `cin` and `cout`, among other things. Here is how you use it in a program:
```cpp
#include <iostream>
using namespace std;

int main() {
	char name[50];
	cout << "Enter name: "; 
	cin >> name; 
	cout << "Your name is: " << name << endl;
	return 0;
}
```





___





# 4. Arithmetic Operations
You can add, subtract, multiply, divide, modulo, increase, and decrease in base C++ math. Here's how you do it.
```cpp
int main() {
    int a = 5;
    int b = 10;

    int sum = a + b;
    int dif = a - b;
    int prod = a * b;
    int quot = a / b;
    int mod = a % b;

    a++; // increases a by 1
    b++; // increases b by 1
}
```
## 4.1 Type Casting
The easiest way to cast is by using parentheses and then the item that you want to cast, like this:
```cpp
#include <iostream>
using namespace std;

double num = 1.578;
cout << (int) fui;
cout << int (fui);
```
Alternatively, you can use implicit type casting

## 4.2 Math Functions
C++ has a library that provides the user with a wealth of different options for math functions: `<cmath>`. 

You can pretty much use any math function you can think of, including `cos`, `exp`, and `pow`.

___





# 5. Assignment Operations

To multiply, divide, add to, subtract from, or modulo a variable, you can use these assignment operations:
```cpp
int num = 5;

num *= 5; // 5 * 5 = 25
num /= 5; // 25 / 5 = 5
num -= 5; // 5 - 5 = 0
num += 5; // 0 + 5 = 5
num %= 5; // 5 % 5 = 0
```





___





# 6. Comments

```cpp
// It's pretty simple to comment in C++. This is a
// single line comment. See how I had to make two?

/* I could fix that with a multi line comment. I don't even need to make several single line comments, so this is much more efficient. However, in certain places single line comments are a lot better. */
```





___





# 7. Decision Structures

```cpp
#include <iostream>

if (true) {
  cout << "Condition is true!";
} 
else if (false) {
  cout << "Condition is false.";
}
```





___





# 8. Conditional Operators

Conditional operators in C++ are similar to mathematical notation. To type them out in the C++ syntax, you do this:
```cpp
#include <iostream>
using namespace std;

int a = 40;
int b = 59;

if (a >= b) {
  cout << a;
} else if (a <= b) {
  cout << b;
}
```





___





# 9. Logic Operators
Logical operators in C++ include `&&` for and, `||` for or, and `!` for not.

```cpp
if (x && y) {
  doThing();
} else if (!x || y) {
  doOtherThing();
} else {
  goToSleep();
}
```





___





# 10. Advanced Decision Structures
As an alternative to if-else structures, you can use the `switch()` statement to check for cases in C++, as below:
```cpp
int value = 4;

switch(value) {
  case 1 :
    cout << "Your AP score is 1 out of 5 - Yikes!";
  case 2 :
    cout << "Your AP score is 2 out of 5 - so close...";
  case 3 :
    cout << "Your AP score is 3 out of 5- good job passing, I guess.";
  case 4 :
    cout << "Your AP score is 4 out of 5- almost perfect!";
  case 5 :
    cout << "YOU DID IT! Your AP score is 5 out of 5!";
}
```





___





# 11. String Methods

???





___





# 12. Random Generation

???





___





# 13. Looping Structures

???





___





# 14. Functions/Methods

???





___





# 15. Elementary Data Structures

???





## 15.1 Arrays/Lists
```cpp
// 
type arrayName [ arraySize ];
int balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

// Assigning different values to 
```






## 15.2 Matrices

???





___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)