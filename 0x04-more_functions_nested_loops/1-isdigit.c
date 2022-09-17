#include "main.h"

/**
 * _isdigit - Checks for a digit  
 * @c: the character
 * Return: 1 if digit or 0-if Not
 */

int _isdigit(int c)   
{
	 if (c >= 48 && c <= 57) 
		 return (1);

	 return (0);
}
