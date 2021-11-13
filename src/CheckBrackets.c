#include <stdbool.h>
#define MAX_LENGTH 255
#include "../includes/lib.h"
#include <string.h>
#include <malloc.h>
bool CheckBrackets(const char* str)
{
	char* stack[MAX_LENGTH];
	int stackSize = 0;

	for(int i = 0; i < strlen(str); ++i)
	{
		if(str[i] == '(' || str[i] == '[' || str[i] == '{')
		{
			stack[stackSize++] = str[i];
		}
		if(str[i] == ')')
		{
			if(stackSize == 0)
				return false;
			if(stack[stackSize - 1] != '(')
				return false;
			stackSize--;
		}
		if(str[i] == ']')
		{
			if(stackSize == 0)
				return false;
			if(stack[stackSize - 1] != '[')
				return false;
			stackSize--;
		}
		if(str[i] == '}')
		{
			if(stackSize == 0)
				return false;
			if(stack[stackSize-1] != '{')
				return false;
			stackSize--;
		}
	}
	return stackSize == 0;

}
