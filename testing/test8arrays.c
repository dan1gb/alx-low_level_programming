#include<stdio.h>
int main(){
	char a[6]="School";
	printf("%s\n",a);
	printf("Value of last character of a %d\n",a[5]);	
	printf("Last character %c\n",a[5]);
	printf("Value or addres of a %p\n",a);
	printf("Value of \"School\":%p\n","School");
	return 0;
}
