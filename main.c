#include <stdlib.h>
#include <stdio.h>

int addch(char* str, int* str_l, char ch);

int main()
{
	char* str = (char*)malloc(1);
	int str_l = 0;
	for(char ch = '0'; ch <= '9'; ++ch)
	{
		addch(str, &str_l, ch);
	}
	printf("%s\n%d\n\n", str, str_l);
	for(int i = 0; i < 10; ++i)
	{
		printf("'%c'", str[i]);
	}
}

int addch(char* str, int* str_l, char ch)
{
	if( *str_l == 0 )
	{
		*str_l = 1;
	}
	printf("=\n");
	str = (char*)realloc(str, (++*str_l) * sizeof(char));
	printf("÷\n");
	str[*str_l - 2] = ch;
	str[*str_l - 1] = '\0';
	return 0;
}
