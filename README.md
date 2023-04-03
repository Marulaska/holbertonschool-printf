# \_PRINTF
## Introducción
\_PRINTF function formats and prints a series of characters and values to the standard output stream stdout.

## This project
This was an assignment in which Holberton School students were tasked into re-implementing the `printf` function with some limitations given by the school.

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called main.h
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the _putchar function for this project

### Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

### Compilation code

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## How Works

This function works by examining each character of a provided format string, and then performing a specific action based on the character it encounters. 
The format string includes text that is printed as-is, and as the function progresses through the string, it checks for the presence of a '%' character.
If a '%' is found, the function checks the next character to see if it is a specific format specifier. If a format specifier is found, the function replaces it with the corresponding text provided as additional parameters. 
If the next character is another '%', the function simply prints a single '%' character. If the character following the '%' is neither a format specifier nor another '%', the function prints the '%' character followed by the next character as-is.

## Flowchart
![diagrama](./img/diagrama.png)

## Format Specifications

Format specifiers are characters that start with the % sign, followed by a character that indicates the type of data that will be printed. For example, %d is used to print a decimal integer, %f to print a floating-point number, %s to print a string of characters, among others.

In addition to the data type, format specifiers can also include additional information to control the way the data is formatted. For example, %6d will print a decimal integer with a minimum width of 6 characters, and %0.2f will print a floating-point number with two decimal places.

 \_printf function uses format specifiers to specify the type and format of data that will be printed on the screen or to an output file.

### Input:

```
int main ()
{
    int age = 34;
    char *name = "Mariana";
    char gender = "F";

    _printf("Name: %s, Gender: %c, Age: %d\n", *name, gender, age);
    return (0);
}
```
### Output:

```
Name: Mariana, Gender: F, Age: 34.
```

## Resources

[Secrects of printf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230403%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230403T042624Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=8d43b45cfbab307b33e5b7cffacd7fdf84a61c0f7ab1653505cc939fd4acc657)

[Printf](https://www.ibm.com/docs/en/i/7.3?topic=functions-printf-print-formatted-characters)

[Flowcharts](https://intranet.hbtn.io/concepts/895)








