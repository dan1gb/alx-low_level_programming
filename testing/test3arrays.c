#include<stdio.h>
void f(int *a)
{
	printf("a:%p\n",a);
return;
}
int main(){
	int *p;
	int t[10];
	p=t;
	printf("t:%p\n",t);
	printf("&t[1]: %p\n",&t[1]);
	printf("p:%p\n",p);
	f(t);
	return 0;
}
