#include "main.h"

/**
<<<<<<< HEAD
 *cap_string -entry point
 *@n: parameter
 */

void 
=======
 *cap_string - entry point
 *@n: parameter
 */

char *cap_string(char *n)
{
	int i;

	i = 0;
	if (n[0] >= 'a' && n[] <= 'z')
	{
		n[0] = n[0] - 32;
	}
	for (i = 0; n[i] != '\0'; i++)
	{
		switch(n[i])
		{
			case ',';
			case ';';
			case '.';
			case '!';
			case '?';
			case '"';
			case '(';
			case ')';
			case '{';
			case '}';
			case ' ';
			case '\n';
			case '\t';
				if (n[i + 1] > 96 && n[i + 1] < 123)
				{
					n[i + 1] = n[i + 1} = 32;
				}
		}
	}
return (n);
}
>>>>>>> fa1e9eeb02fafd79147784789edeb9ec4f8e52f6
