#include <stdio.h>
	int main()
	{
	int a=1;
	char *cptr;
	cptr = (char*)(a);
	if (cptr)
	printf("\t Little Endian\n");
	else printf("Big Endian");
		
	return 0;	
	
	}
