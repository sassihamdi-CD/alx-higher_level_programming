# 0x0B. Python - Input/Output

## Description
This project focuses on input/output operations in Python. It covers topics such as reading and writing files, working with JSON, and serialization.

## Resources
Read or watch:
- [7.2. Reading and Writing Files](https://docs.python.org/3/tutorial/inputoutput.html#reading-and-writing-files)
- [8.7. Predefined Clean-up Actions](https://docs.python.org/3/tutorial/errors.html#predefined-clean-up-actions)
- [Dive Into Python 3: Chapter 11. Files (until “11.4 Binary Files” (included))](http://histo.ucsf.edu/BMS270/diveintopython3-r802.pdf)
- [JSON encoder and decoder](https://docs.python.org/3/library/json.html)
- [Learn to Program 8 : Reading / Writing Files](https://www.youtube.com/watch?v=EukxMIsNeqU)
- [Automate the Boring Stuff with Python (ch. 8 p 180-183 and ch. 14 p 326-333)](https://automatetheboringstuff.com/)
- [All about py-file I/O](https://www.w3schools.com/python/python_file_handling.asp)

## Learning Objectives
At the end of this project, you should be able to explain to anyone, without the help of Google:
- Why Python programming is awesome
- How to open a file
- How to write text in a file
- How to read the full content of a file
- How to read a file line by line
- How to move the cursor in a file
- How to make sure a file is closed after using it
- What is JSON
- What is serialization
- What is deserialization
- How to convert a Python data structure to a JSON string
- How to convert a JSON string to a Python data structure

## Requirements
### Python Scripts
- Allowed editors: vi, vim, emacs
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All your files should end with a new line
- The first line of all your files should be exactly `#!/usr/bin/python3`
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the `pycodestyle` (version 2.8.*) style
- All your files must be executable
- The length of your files will be tested using `wc`

### Python Test Cases
- Allowed editors: vi, vim, emacs
- All your files should end with a new line
- All your test files should be inside a folder named `tests`
- All your test files should be text files (extension: `.txt`)
- All your tests should be executed by using this command: `python3 -m doctest ./tests/*`
- All your modules should have a documentation (python3 -c 'print(__import__("my_module").__doc__)')
- All your classes should have a documentation (python3 -c 'print(__import__("my_module").MyClass.__doc__)')
- All your functions (inside and outside a class) should have a documentation (python3 -c 'print(__import__("my_module").my_function.__doc__)' and python3 -c 'print(__import__("my_module").MyClass.my_function.__doc__)')
- A documentation is not a simple word, it’s a real sentence explaining what’s the purpose of the module, class, or method (the length of it will be verified)
- We strongly encourage you to work together on test cases so that you don’t miss any edge case

## Files

| Filename               | Description                                                         |
|------------------------|---------------------------------------------------------------------|
| `0-read_file.py`       | Function that reads a text file and prints its content to stdout     |
| `1-write_file.py`      | Function that writes a string to a text file and returns the number of characters written |
| `2-append_write.py`    | Function that appends a string at the end of a text file and returns the number of characters added |
| `3-to_json_string.py`  | Function that returns the JSON representation of an object (string)  |
| `4-from_json_string.py`| Function that returns an object represented by a JSON string         |
| `5-save_to_json_file.py`| Function that writes an object to a file using JSON representation   |
| `6-load_from_json_file.py` | Function that creates an object from a JSON file                  |
| `7-add_item.py`        | Script that adds all arguments to a Python list and saves them to a file |
| `8-class_to_json.py`   | Function that returns the dictionary representation of a class instance for JSON serialization |
| `9-student.py`         | Class `Student` that defines a student with public instance attributes and a `to_json` method |
| `10-student.py`        | Class `Student` with an extended `to_json` method that retrieves a dictionary representation of a `Student` instance with optional attribute filtering |
| `11-student.py`        | Class `Student` with a `reload_from_json` method to replace all attributes of the `Student` instance |
| `12-pascal_triangle.py`| Function `pascal_triangle` that returns a list of lists representing Pascal's triangle of `n` |

## Usage
```shell
$ ./0-read_file.py my_file.txt
$ ./1-write_file.py my_file.txt "Hello, world!"
$ ./2-append_write.py my_file.txt "Hello again!"
$ ./3-to_json_string.py
$ ./4-from_json_string.py
$ ./5-save_to_json_file.py my_obj.json
$ ./6-load_from_json_file.py my_obj.json
$ ./7-add_item.py my_list.json item1 item2 item3
$ ./8-class_to_json.py
$ ./9-student.py
$ ./10-student.py
$ ./11-student.py
$ ./12-pascal_triangle.py 5
