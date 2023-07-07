#include <stdio.h>
int main(int argc, char *argv[]){
int count;
printf("argc is %d\n",argc);
printf("This program was called with \"%s\".\n",argv[0]);
if(argc>1){
for(count =1;count<argc;count++){
printf("argv[%d] is %s\n",count, argv[count]);
}
}
return 0;
}
