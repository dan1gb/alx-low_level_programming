#include <stdio.h>
int main(){
	const int MAX=3;
	int var[]={10,100,200};
	int i,*ptr;
ptr=var;
	for(i=0;i<MAX;i++){
		printf("Address of var[%d]= %p\n",i,ptr);
		printf("Value of var[%d]=%d\n",i,*ptr);
		/*move to next location*/
		ptr++;
	}
	return 0;
}
