#include<stdio.h>
int main(){
	char b[98]; int c[100];
	printf("b:%p\n",b);
	printf("&b:%p\n",&b);
	printf("c:%p\n",&c);
	printf("size of b:%lu\n",sizeof(b));
	printf("size of &b:%lu\n",sizeof(&b));
	printf("size of &c:%lu\n",sizeof(&c));
	return 0;
}
