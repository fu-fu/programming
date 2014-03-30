#include <stdio.h>

int main(int argc, char *argv[]){
	int i=0;
	int *p=&i;

	while(1){
		i++;
		p++;
		printf("%d:%d\n",i,*p);
		
	}
	return 0;
}
