#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>

void main()
{
const char *strings[] = {
	"Just a note to say..",
	"As you move into a new venture...",
	"May luck and success always be with you!"
};

int size = sizeof(strings)/sizeof(strings[0]);
int j = 0;
for(int i = 0; i < size; i++)
{
	printf("%s",strings[i]);
	printf("\n");
	sleep(2);
	}

sleep(10);   
}

