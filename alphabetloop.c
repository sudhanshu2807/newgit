/* alphabet using while loop
here we will use ASCII code for alphabet 
*/
#include<stdio.h>

int main()
{
	int ascii_code = 65;
	while(ascii_code < 91)
	{
	  printf("ascii_code = %d \t character = %c\n",ascii_code,ascii_code);	
	  ascii_code++	
	}
return 0;	
	
	
}
