```markdown
# Arrays and Strings in C++

## Aim:
To use and implement C++ Arrays and Strings.

## Software Used:
Visual Studio Code

## Theory:

### Arrays:
An array in C++ is a collection of elements of the same data type, stored in contiguous memory locations. Arrays provide a way to store multiple values under a single variable name, accessible via an index.

#### Syntax:
```cpp
data_type array_name[array_size];
```

#### Example:
```cpp
#include<iostream>
using namespace std;

int main() {
    int x[6] = {1, 4, 7, 8, 3, 9};
    int i;
    for (i = 0; i < 6; i++) {
        cout << x[i] << endl;
    }
    return 0;
}
```

### Strings:
In C++, a string is an array of characters terminated by a null character (`'\0'`). Strings in C++ can be handled using either C-style strings (character arrays) or the `std::string` class from the Standard Library.

#### Syntax:
```cpp
char str[10] = "Hello";
```

#### Example:
```cpp
#include<iostream>
using namespace std;

int main() {
    char str1[4] = "C++";
    char str2[] = {'s', '+', '+', '\0'};
    string str3 = "C++";

    cout << str1 << endl << str2 << endl << str3;
    return 0;
}
```

## Algorithms:

### Algorithm 1: Sum of Elements in an Array

1. **Start**
2. **Declare** an integer array `x` of size 6, and integer variables `i`, `sum`, and `avg`.
3. **Initialize** `sum` to 0.
4. **Display** the message "Enter array: " to prompt the user for input.
5. **Use a for loop** to iterate from `i = 0` to `i < 6`:
   - In each iteration, take input from the user and store it in the array `x[i]`.
6. **Display** the message "The entered elements are: ".
7. **Use another for loop** to iterate from `i = 0` to `i < 6`:
   - In each iteration, print the element `x[i]`.
8. **Use another for loop** to iterate from `i = 0` to `i < 6`:
   - In each iteration, add the value of `x[i]` to `sum`.
9. **After the loop**, print the sum of the elements using the message "The sum of elements is: " followed by the value of `sum`.
10. **Calculate** the average of the elements by dividing `sum` by 6 and store the result in `avg`.
11. **Print** the average of the elements using the message "The average of elements is: " followed by the value of `avg`.
12. **End**

### Example Code for Sum of Array Elements:
```cpp
#include<iostream>
using namespace std;

int main() {
    int x[6], sum = 0, avg, i;

    cout << "Enter array: " << endl;
    for (i = 0; i < 6; i++) {
        cin >> x[i];
    }

    cout << "The entered elements are: " << endl;
    for (i = 0; i < 6; i++) {
        cout << x[i] << endl;
    }

    for (i = 0; i < 6; i++) {
        sum += x[i];
    }

    cout << "The sum of elements is: " << sum << endl;
    avg = sum / 6;
    cout << "The average of elements is: " << avg << endl;

    return 0;
}
```

### Algorithm 2: Reversing a String

1. **Start**
2. **Declare** a string variable `a`.
3. **Display** the message "Enter a string: " to prompt the user for input.
4. **Read** the input string from the user and store it in the variable `a`.
5. **Calculate** the length of the string `a` and store it in an integer variable `n`.
6. **Use a for loop** to iterate from `i = n - 1` down to `i >= 0`:
   - In each iteration, print the character `a[i]`.
7. **End**

### Example Code for Reversing a String:
```cpp
#include<iostream>
#include<string>
using namespace std;

int main() {
    string a;

    cout << "Enter a string: ";
    cin >> a;

    int n = a.length();
    
    cout << "Reversed string: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i];
    }
    cout << endl;

    return 0;
}
```

## Conclusion:
In this exercise, we learned how to use arrays and strings in C++. We practiced summing elements in an array and reversing a string, demonstrating fundamental operations on arrays and strings.
```# Arrays-and-strings.
