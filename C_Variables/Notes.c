#include <stdio.h>

/**
 * main - the main function
 *
 * Return: 0
 */

int main(void)
{
	List of Keywords in C
		for int char if else while double sizeof
			float return auto break case const continue do
				default enum extern goto long register short signed
					static struct switch typedef union unsigned void volatile
	
	Identifiers are simply names the rules are
		May use 52 upper and lowercase alphabet characters
		The 10 digits and the '_' which is treated as an alphabet character
		Only restriction is identifiers must start with an alphabetic character
		The length limit of an is 31 but to be longer they must differ in the first 31 characters - portable programs

	About the plain integer int
	int variables are stored in whatever unit that is most convenient for the machine running your program
	The standard header file <limits.h> details the actual number of bits available in a given implementation
	It doesn't exactly specify a number but gives the maximum and minimum values of an int instead
	int 32767 to -32767 which implies 16 bits or more
	unsigned int 0 to 65535 meaning that it cannot be negative
	Bitwise operators encourage me to think of the number of bits in a variable making C programmer aware of portability issues

	About the pain integer char
	A char is just another form of an integer that follows all the rules applied to ints without any indivual rules
	0 to 127 is the only guaranteed range of char whether or not they behave as signed or unsigned types
	You can use %c or %d with printf to output char %d is  because char is just another integral type

	About subtypes short, ordinary and long
	Signed types are capable of being negative while the unsigned types cannot be negative at any time
	unsigned types are used to get an extra bit of precision or when the concept of being negative is not present in the data
	signed short int, signed int, signed long int eliminate signed because int types are signed types anyway
	unsigned short int, unsigned int, unsigned long int produces the difference in that values are positive
	The only character types are signed char and unsigned char
	The difference between char and int variables is that unless otherwise stated all ints are signed
	The same is not true for chars which are signed or unsigned depending on the implementor's choice

	To print
	%c is used with char(in character form)
	%d is used with decimal signed int, short, char
	%u is used with decimal unsigned int, unsigned short, unsigned char
	%x is used with hexadecimal int, short, char
	%o is used with octal int, short, char
	%ld is used with decimal signed long
	%lu %lx %lo used as above but for longs
}
