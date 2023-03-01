#include<stdio.h>
int main(void)
{
	int n=98,*p=&n;
	char c='H',*pp=&c;
	*p=402;
	*pp='o';
	printf("New value of n is %d\n",n);
	printf("New value of *pp is: %d\n",*pp);
	printf("Value of c is %d or ('%c')\n",c,c);
	printf("Value of *pp is %d or ('%c')\n",*pp,*pp);
}
