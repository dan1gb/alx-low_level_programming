#include<stdio.h>
int main()
{
	int a[5]={98,198,298,398,498};
	printf("Value of a[0]:%d\nValue of a[1]:%d\nValue of a[2]: %d\nValue of a[3]: %d\nValue of a[4]:%d\n",a[0],a[1],a[2],a[3],a[4]);
printf("Address of a[0]: %p\nAddress of a[1]: %p\nAddress of a[2]: %p\nAddress of a[3]: %p\nAddress of a[4]:%p\n",&a[0],&a[1],&a[2],&a[3],&a[4]);
	return 0;
}
