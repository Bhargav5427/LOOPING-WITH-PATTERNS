#include<stdio.h>

main()

{
	char j,i,count='A';
	
	for(i='A';i<='E';i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c",count);
			count++;
		}
		printf("\n");
	}
}