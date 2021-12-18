#include<stdio.h>
#include<windows.h>
#include<string.h>

char* my_strchr(char* str, char c)
{
    if(*str == '\0')
    {
  	return NULL;
    }
    while(*str != '\0')
    {
	if(*str == c)
	{
	    printf("找到了\n");
	    return (char*) str;
	}
	str++;
    }
}

void main()
{
    char str[] = "abcdef";
    char c = 'c';
    char* ret = my_strchr(str, c);
    printf("ret = %s\n", ret);
    system("pause");
}