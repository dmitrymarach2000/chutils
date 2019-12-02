#include <stdlib.h>
#include <stdio.h>

int addch(char* str, int* str_l, char ch);

int main()
{
	char* str = (char*)malloc(1);
	int str_l = 0;
	for(char ch = 'a'; ch <= 'z'; ++ch)
	{
		addch(str, &str_l, ch);
		printf("%c__________________\n", ch);
		for(int i = 0; i < str_l; ++i)
			printf("%c-'%d'\n", str[i], str[i]);
	}
	printf("%s\n%d\n\n", str, str_l);
}

int addch(char* str, int* str_l, char ch)
{
	if( *str_l == 0 )
	{
		*str_l = 1;
	}
	//printf("=\n");
	str = (char*)realloc(str, (++*str_l) * sizeof(char));
	//printf("÷\n");
	str[*str_l - 2] = ch;
	str[*str_l - 1] = '\0';
	return 0;
}
