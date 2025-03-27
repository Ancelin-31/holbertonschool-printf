# Holbertonschool-Printf

## Description
The `_printf` command uses multiple functions to handle several types of arguments, allowing user to give almost any type of them
in the form of a string and to print it in the standard output. User must specify the type of argument, using a special identifier character in this format : `%id`.

| Identifier | Function | Stdout |
|%  |printpercent, prints a percent symbol  |%  |
|%c |printcharacter, prints a simple character  |a, p, ...  |
|%s |printstring, prints a string of character  |"Jeffrey"  |
|%d, %i |printint, prints an integer    |42 |

## Requierments
    * Allowed editors: vi, vim, emacs
    * All files must be compiled on Ubuntu 20.04 using gcc
    * All files should end with a new line
    * A README.md file is mandatory
    * The code used must respect Betty style
    * Global variables are not allowed
    * There should not be more than 5 functions per file
    * Prototypes of all used functions must be included in an header file named main.h
    * All the headers should be include guarded

## Authorized functions
* write
* malloc
* free
* va_start
* va_end
* va_copy
* va_arg

## Compilation
```
$ gcc -Wal -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Exemples
## Testing method
## Man printf
To read the man page, you can also use the command [man -l man_3_printf.3](https://github.com/Ancelin-31/holbertonschool-printf/blob/test/man_printf.png)
## [Flowchart](https://github.com/Ancelin-31/holbertonschool-printf/blob/test/flowchart.jpg)
## Authors
This command has been written by Jeffrey BASSET and Ancelin CHEVALLIER.
