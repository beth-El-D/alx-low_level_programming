#include  "main.h"
/**
 * _abs - compute the absolute value of an integer
 *  @c- a number to be checked
 *  return: absolute value of the nuber
 */

int _abs(int c)
{
	if  (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
