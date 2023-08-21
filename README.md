C Group project

0x11. C - printf

#Requirements

 * General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

#GitHub
           * There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

#More Info

Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

#Compilation

* Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
* As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
* Our main files will include your main header file (main.h): #include main.h
* You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf.

* We strongly encourage you to work all together on a set of tests
* If the task does not specify what to do with an edge case, do the same as printf
Copyright - Plagiarism

* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

Tasks 0

  * Write a function that produces output according to a format.

* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
* c
* s
* %
* You don’t have to reproduce the buffer handling of the C library printf function
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers

Repo:

* GitHub repository: printf

Tasks 1

 * Handle the following conversion specifiers:

* d
* i
* You don’t have to handle the flag characters
* You don’t have to handle field width
* You don’t have to handle precision
* You don’t have to handle the length modifiers
Repo:

* GitHub repository: printf
