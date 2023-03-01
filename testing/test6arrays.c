#include<stdio.h>
int main(){
	int a[5];
	int *p;
	int *p2;

	*a=98; *(a+1)=198;*(a+2)=298;a[3]=398;*(a+4)=498;
	printf("value of *(a+4) is %d\n",*(a+4));
return 0;
}
