# Libft - Your Personal C Function Library

## Description

`libft` is a custom C library that implements a series of standard functions from the C library (libc), as well as other useful functions for handling strings, memory and more. This library was created as part of the 42 school educational project to understand and develop a personalized version of fundamental functions found in the standard library.

The goal of `libft` is to provide a solid foundation of tools for future C projects.

## Contents

This project includes the implementation of the following functions, categorized into **two** main sections: reimplemented libc functions and additional functions.

---

### 1. **Reimplemented Libc Functions**

#### **Memory Manipulation**
- **`ft_memset`**: Fills a block of memory with a specific value.
- **`ft_bzero`**: Sets a block of memory to zero.
- **`ft_memcpy`**: Copies a block of memory without overlap.
- **`ft_memmove`**: Copies blocks of memory that may overlap.
- **`ft_memchr`**: Searches for a specific byte in a block of memory.
- **`ft_memcmp`**: Compares two blocks of memory.

#### **String Manipulation**
- **`ft_strlen`**: Calculates the length of a string.
- **`ft_strdup`**: Duplicates a string.
- **`ft_strlcpy`**: Copies a string with a specific size.
- **`ft_strlcat`**: Concatenates strings while ensuring the destination size.
- **`ft_strchr`**: Searches for a character in a string from the beginning.
- **`ft_strrchr`**: Searches for a character in a string from the end.
- **`ft_strncmp`**: Compares two strings up to a given number of characters.
- **`ft_strnstr`**: Searches for a substring within a string, limited by a specified length.

#### **Conversions**
- **`ft_atoi`**: Converts a string to an integer.

#### **Type Checking**
- **`ft_isalpha`**: Checks if the character is a letter.
- **`ft_isdigit`**: Checks if the character is a digit.
- **`ft_isalnum`**: Checks if the character is alphanumeric.
- **`ft_isascii`**: Checks if the character is an ASCII character.
- **`ft_isprint`**: Checks if the character is printable.

#### **Character Transformation**
- **`ft_toupper`**: Converts a character to uppercase.
- **`ft_tolower`**: Converts a character to lowercase.

#### **Memory Allocation**
- **`ft_calloc`**: Allocates memory and initializes it to zero.

---

### 2. **Additional Functions**

These functions are not part of the standard libc but are useful for working with strings and other manipulations in C.

#### **String Manipulation**
- **`ft_substr`**: Extracts a substring from a given string.
- **`ft_strjoin`**: Concatenates two strings into a new one.
- **`ft_strtrim`**: Removes specific characters from the start and end of a string.
- **`ft_split`**: Splits a string into an array of strings based on a delimiter.

#### **Conversion and Formatting**
- **`ft_itoa`**: Converts an integer to a string.

#### **Iteration Functions**
- **`ft_strmapi`**: Applies a function to each character of a string and returns a new string with the results.
- **`ft_striteri`**: Applies a function to each character of a string, using its index as a parameter.

---

## Installation and Usage

### 1. **Clone the Repository**
Clone the `libft` repository to your local machine:

```bash
git clone https://github.com/yourusername/libft.git
```

### 2. **Compile the Library**
Once you’ve cloned the repository, navigate to the project directory and run `make` to compile the library:

```bash
cd libft
make
```

This will generate a file called `libft.a`, which is the static library file that you can link to your C projects.

### 3. **Using the Library**
To use `libft` in your projects, simply include the `libft.h` file and link the library when compiling your program:

```c
#include "libft.h"
```

### 4. **Cleaning Up Build Files**
To remove the object files generated during compilation, you can run:

```bash
make clean
```

To also remove the `libft.a` file, run:

```bash
make fclean
```

---

## Credits

This project was developed as part of the curriculum of the programming school 42. The `libft` library is designed to be a reference tool for future projects and a solid base of functions in C.
