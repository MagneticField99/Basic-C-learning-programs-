#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	for (int i = 1; i < argc; ++i)
	{
		printf("Hello world! argc=%d arg %d is %s\n",argc,i,argv[i]);
	}
	return 0;
}
/* this is the for loop we have to declare the i variable to get the condtion working */
/* here the %d means that this is a decimal or an integral value we accepting & %s means that this is a string value we are accepting */
/* char const *argv[] & char **argv is used to get the value of the strings */
/* here the value is given to return 0 as per the value of the main() funtion did not happen */

/* for running this code on ubuntu type in */
/* 1. gcc -o T name_of_the_file.c *?
/* 2. chmod +x T */
/* 3. ./T the strings names like example ./T Hello world */