#include <stdio.h>

int main(void)
{
	char* ptr[4] = { "Korea","Seoul","Mapo","152¹øÁö 2/3" };

	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);
	printf("%s\n", ptr[3]);

	ptr[2] = "Jongno";

	printf("%s\n", ptr[0]);
	printf("%s\n", ptr[1]);
	printf("%s\n", ptr[2]);
	printf("%s\n", ptr[3]);
}