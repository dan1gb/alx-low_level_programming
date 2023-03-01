#include <stdio.h>
int main(){
	int var=20,*ip=&var;
	printf("Address of var is %p\n",&var);
	printf("Address stored in ip: %p\n",ip);
	printf("value of ip: %d\n",*ip);
	return 0;
}
