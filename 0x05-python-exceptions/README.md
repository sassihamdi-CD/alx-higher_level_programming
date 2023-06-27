# Python Exceptions Project

## Description
This project focuses on understanding and implementing exception handling in Python. The goal is to develop functions that handle errors and exceptions gracefully, preventing program crashes and allowing for proper error management.

## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
- Why Python programming is awesome
- What’s the difference between errors and exceptions
- What are exceptions and how to use them
- When do we need to use exceptions
- How to correctly handle an exception
- What’s the purpose of catching exceptions
- How to raise a built-in exception
- When do we need to implement a clean-up action after an exception

## Requirements
- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/usr/bin/python3`
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the pycodestyle (version 2.8.\*)
- All your files must be executable
- The length of your files will be tested using wc

## Tasks
### 0. Safe list printing
Write a function that prints x elements of a list.

- Prototype: `def safe_print_list(my_list=[], x=0):`
- You are not allowed to import any module
- You are not allowed to use `len()`

### 1. Safe printing of an integers list
Write a function that prints an integer with "{:d}".format().

- Prototype: `def safe_print_integer(value):`
- You have to use try: / except:
- You have to use "{:d}".format() to print as an integer
- You are not allowed to import any module
- You are not allowed to use type()

### 2. Print and count integers
Write a function that prints the first x elements of a list and only integers.

- Prototype: `def safe_print_list_integers(my_list=[], x=0):`
- You have to use try: / except:
- You have to use "{:d}".format() to print an integer
- You are not allowed to import any module
- You are not allowed to use len()

### 3. Integers division with debug
Write a function that divides 2 integers and prints the result.

- Prototype: `def safe_print_division(a, b):`
- You have to use try: / except: / finally:
- You have to use "{}".format() to print the result
- You are not allowed to import any module

### 4. Divide a list
Write a function that divides element by element 2 lists.

- Prototype: `def list_division(my_list_1, my_list_2, list_length):`
- You have to use try: / except: / finally:
- You are not allowed to import any module

### 5. Raise exception
Write a function that raises a type exception.

- Prototype: `def raise_exception():`
- You are not allowed to import any module

### 6. Raise a message
Write a function that raises a name exception with a message.

- Prototype: `def raise_exception_msg(message=""):`
- You are not allowed to import any module

**Note:** The code snippets and examples for each task are not provided here. Please refer to the actual project files in the respective directory for the complete code and examples.

## Author
- Sassi Hamdi
