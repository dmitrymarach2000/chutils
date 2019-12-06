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
	int p = *str_l;
	if( p == 0 )
	{
		p = 1;
	}
	//printf("=\n");
	p++;
	str = (char*)realloc(str, p * sizeof(char));
	//printf("÷\n");
	str[p - 2] = ch;
	str[p - 1] = '\0';
	*str_l = p;
	return 0;
}
