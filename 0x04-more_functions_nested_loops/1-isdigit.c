#include "main.h"
/** _isdigit - function checking if character is a digit
 * @x: parameter being checked
 * Return: return 1 if digit, else 0
 */

int _isdigit(int x)
{
if (x >= 48 && x <= 57)
return (1);
else
return (0);
}
