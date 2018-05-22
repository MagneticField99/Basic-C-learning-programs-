// Using the if and else tags in the main funtion
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int age;
	int bonus;
	age=70;
	if (age == 45)
	{
		bonus=50;
	}
	else{

		bonus=100;
	}
	printf("yout age is %d your bonus is %d\n",age,bonus);
	return 0;
}


/* Here the value of age is not equal to 45  so the from the condition got the value of bonus to be 100 
   Here the checking the values of the age and conditons are equal or not can be done by using the == signs*/
/* for the if conditon there is always an else condtion which contradicts the if condition */