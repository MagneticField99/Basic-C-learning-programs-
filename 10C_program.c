#include <stdio.h>
	
int joy(int brown)
{
	
	int black;
	black = brown*100;
	return black;
	
}

int main(int argc, char const *argv[])
{	
	printf("%d\n",joy(10) );
	return 0;
}
//using two function for first time and having the return value set up to for using the value to the main funtion 
//here main funtion is the mother of all funtions 
