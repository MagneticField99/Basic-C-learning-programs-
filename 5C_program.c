#include <stdio.h>

int main(int argc, char const *argv[])
{
	printf("hello world\n");
	puts("hello world again");
	printf("there were %d doors in the %s\n", 100,"Hall");
	return 0;
}
/* here the %d means that this is a decimal or an integral value we accepting & %s means that this is a string value we are accepting */
/* here the puts funtion can also be used for printing stuff but it is used only for simpler text to be printed */
/* Here the %d is replaced by 100 and %s is replaced by the string Hall */
/* puts gets a new blank line between the printf code and puts code */
/* format specifer should work or there will be errors in the code */