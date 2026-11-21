#include <stdio.h>


typedef enum e_level
{
	easy,
	medium,
	hard
}level;


int main()
{
	level my_lvl = medium;
	printf("%d", my_lvl);
}