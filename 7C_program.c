#include <stdio.h>
main()
{
	int grass;
	int trees;
	int plants;
	double raw;
	double solution;
	grass = 10;
	trees = 20;
	plants = 100;
	raw = grass + trees + plants;
	solution = raw/100;
	printf("the popution denstiy is given by %.1f\n",solution);
	return 0;
}

// int does not take any decimal point values 
// this %.2f is used as just like %s and  %d tags
// the int function is a greatest integer funtion 
