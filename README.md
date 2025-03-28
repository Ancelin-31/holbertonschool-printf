# Holbertonschool-Printf

## Description
The `_printf` command uses multiple functions to handle several types of arguments, allowing user to give almost any type of them
in the form of a string and to print it in the standard output. User must specify the type of argument, using a special identifier character in this format : `%id`.

| Identifier | Function | Stdout |
| :-----:   |:--------- | :------|
|%  |printpercent, prints a percent symbol  |%  |
|%c |printcharacter, prints a simple character  |a, p, ...  |
|%s |printstring, prints a string of character  |"Jeffrey"  |
|%d, %i |printint, prints an integer    |42 |

### Requierments
    * Allowed editors: vi, vim, emacs
    * All files must be compiled on Ubuntu 20.04 using gcc
    * All files should end with a new line
    * A README.md file is mandatory
    * The code used must respect Betty style
    * Global variables are not allowed
    * There should not be more than 5 functions per file
    * Prototypes of all used functions must be included in an header file named main.h
    * All the headers should be include guarded

### Authorized functions
* write
* malloc
* free
* va_start
* va_end
* va_copy
* va_arg

### Compilation
Be sure to have all of these files :
* \_puchar.c
* function.c
* get_function.c
* \_printf.c
* main.h

Then execute the following command :
```
$ gcc -Wal -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Code snippets
Core file of the function, "\_printf.c"
```
 int _printf(const char *format, ...)
{
         va_list args; /* declares the va_list of arguments */
         int length = 0;
         if (format == NULL)
                 return (-1);

        va_start(args, format);

        length = get_function(format, args);
        va_end(args);
        return (length);
}
```
Function to find and execute the right "print", get_function.c

```
int get_function(const char *format, va_list args)
 12 {
 13         int i = 0, j, length = 0;
 14 /* create a structure associating identifiers and print functions*/
 15         function_t function[] = {
 16                 {'c', printchar}, {'b', printbinary},
 17                 {'s', printstring}, {'o', printoctal},
 18                 {'%', printpercent}, {'u', printunsigned},
 19                 {'i', printint}, {'x', print_hex_low},
 20                 {'d', printint}, {'X', print_hex_upper},
 21                 {'\0', NULL}
 22         };
 23         while (format[i]) /*reads argument*/
 24         {
 25                 if (format[i] == '%') /*checks the condition to "print"     functions*/
 26                 {
 27                         if (format[i + 1] == '\0')
 28                                 return (-1);
 29                         j = 0;
 30                         while (function[j].id)
 31                         {
 32                                 if (format[i + 1] == function[j].id)
 34                                 {
 35                                         length += function[j].fptr(args)    ;
 36                                         i += 2;
 37                                         break;
 38                                 }
 39                                 j++;
 40                         }
 41                         if (function[j].id == '\0')
```
## Exemples
## Testing method
## Man printf
To read the man page, you can also use the command [man -l man_3_printf.3](https://github.com/Ancelin-31/holbertonschool-printf/blob/test/man_printf.png)
## [Flowchart](https://github.com/Ancelin-31/holbertonschool-printf/blob/test/flowchart.jpg)
## Authors
This command has been written by Jeffrey BASSET and Ancelin CHEVALLIER.
