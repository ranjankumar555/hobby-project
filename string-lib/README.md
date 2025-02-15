# Custom String Library in C

## Overview
This project is a user-defined string library implemented in C. It replicates commonly used functions from `<string.h>` and introduces additional utility functions for string manipulation. The goal of this project is to enhance understanding of C programming and string handling.

## Features
- Implementation of common string functions from `<string.h>`
- Additional utility functions for enhanced string operations
- Well-structured code with comments for easy understanding
- Fully tested with examples and test cases

## Progress Tracker

| No. | Task | Status |
|----|------|--------|
| 1 | Implement `my_strlen` | ✅ Completed |
| 2 | Implement `my_strcpy` | ✅ Completed |
| 3 | Implement `my_strncpy` | ✅ Completed |
| 4 | Implement `my_strcat` | ✅ Completed |
| 5 | Implement `my_strncat` | ✅ Completed |
| 6 | Implement `my_strcmp` | 🚧 In Progress |
| 7 | Implement `my_strncmp` | ❌ Not Started |
| 8 | Implement `my_strchr` | ❌ Not Started |
| 9 | Implement `my_strrchr` | ❌ Not Started |
| 10 | Implement `my_strstr` | ❌ Not Started |
| 11 | Implement `my_strspn` | ❌ Not Started |
| 12 | Implement `my_strcspn` | ❌ Not Started |
| 13 | Implement `my_strrev` | ❌ Not Started |
| 14 | Implement `my_strupper` | ❌ Not Started |
| 15 | Implement `my_strlower` | ❌ Not Started |
| 16 | Implement `my_strtrim` | ❌ Not Started |
| 17 | Implement `my_strsplit` | ❌ Not Started |

## Implemented Functions
### Standard Functions

| No. | Function | Description |
|----|----------|-------------|
| 1 | `size_t my_strlen(const char *str);` | Returns the length of a string |
| 2 | `char *my_strcpy(char *dest, const char *src);` | Copies a string from `src` to `dest` |
| 3 | `char *my_strncpy(char *dest, const char *src, size_t n);` | Copies up to `n` characters from `src` to `dest` |
| 4 | `char *my_strcat(char *dest, const char *src);` | Concatenates `src` to `dest` |
| 5 | `char *my_strncat(char *dest, const char *src, size_t n);` | Concatenates up to `n` characters from `src` to `dest` |
| 6 | `int my_strcmp(const char *str1, const char *str2);` | Compares two strings |
| 7 | `int my_strncmp(const char *str1, const char *str2, size_t n);` | Compares up to `n` characters of two strings |
| 8 | `char *my_strchr(const char *str, int ch);` | Finds the first occurrence of a character in a string |
| 9 | `char *my_strrchr(const char *str, int ch);` | Finds the last occurrence of a character in a string |
| 10 | `char *my_strstr(const char *haystack, const char *needle);` | Finds a substring in a string |
| 11 | `size_t my_strspn(const char *str, const char *accept);` | Calculates the length of the initial segment containing only characters from `accept` |
| 12 | `size_t my_strcspn(const char *str, const char *reject);` | Calculates the length of the initial segment containing no characters from `reject` |

### Additional Utility Functions

| No. | Function | Description |
|----|----------|-------------|
| 1 | `char *my_strrev(char *str);` | Reverses a string |
| 2 | `char *my_strupper(char *str);` | Converts a string to uppercase |
| 3 | `char *my_strlower(char *str);` | Converts a string to lowercase |
| 4 | `char *my_strtrim(char *str);` | Removes leading and trailing spaces |
| 5 | `char **my_strsplit(const char *str, char delimiter, int *count);` | Splits a string into an array of substrings |

## Compilation and Usage
To compile and use the library:

```sh
gcc -o my_string_lib main.c my_string_lib.c
./my_string_lib
```

## Example Usage
```c
#include "my_string_lib.h"
#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[20];
    
    my_strcpy(str2, str1);
    printf("Copied string: %s\n", str2);
    
    printf("Length: %zu\n", my_strlen(str1));
    return 0;
}
```

## Contribution
Feel free to fork this repository, improve the functions, add new ones, or optimize the existing implementation. Pull requests are welcome!

## License
This project is open-source and licensed under the MIT License.


