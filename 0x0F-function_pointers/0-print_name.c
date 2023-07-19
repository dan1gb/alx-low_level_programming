/**
 * print_name - function to print name
 *
 * @name: name to print
 * @f: function pointwer that returns naetsing
 *
 * Return: Success
*/

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
