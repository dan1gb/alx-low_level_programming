#include<stdio.h>
int main(){
	int *p,a[2],n;
	p=&n;
	printf("p=&n;\n p:%p\n",p);
	printf("p+1:%p\n",p+1);
	printf("p+2:%p\n",p+2);
	printf("p+10:%p\n",p+10);
return 0;
}
