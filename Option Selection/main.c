#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printoptions() 
{

	printf("Option 1: \nOption 2: \nOption 3: \n");

}

void option1()
{
	printf("This is option 1");
}

void option2()
{
	printf("This is option 2");
}

void option3()
{
	printf("This is option 3");
}



int main()
{
	int* option;

	option = (int*)malloc(sizeof(*option));

	printoptions();

	scanf("%i", &option);

	printf("You entered: %i \n", option);

	if (option == 1)
	{
		option1();
	}

	if (option == 2)
	{
		option2();
	}

	if (option == 3)
	{
		option3();
	}

	free(option);

	return 0;
}