#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main()
{
	char* word;

	word = (char*)malloc(sizeof(*word));

	printf("Enter a word:\n");

	scanf("%s", &word);

	printf("You entered: %s \n", &word);

	free(word);

	return 0;
}