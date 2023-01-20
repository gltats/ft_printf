# ft_printf
Ft_printf has been created for the Core curses at 42 Wolfsburg.

The intention is to create a library of functions.

## Status:
- Actual status:  finished.\
- Result : 100%

## Technical considerations:
The prototype of ft_printf() is:
int ft_printf(const char *, ...);

Here are the requirements:
- Don’t implement the buffer management of the original printf().
- Your function has to handle the following conversions: cspdiuxX%
- Your function will be compared against the original printf().
- You must use the command ar to create your library. Using the libtool command is forbidden.
- Your libftprintf.a has to be created at the root of your repository.

It's needed to implement the following conversions:
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

##
![Generic badge](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

[![ForTheBadge built-with-love](http://ForTheBadge.com/images/badges/built-with-love.svg)](https://GitHub.com/Naereen/)
