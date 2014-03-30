#include <stdio.h>
/*
int main(long argc, char *argv[]){
	long i;
*/
int main(int argc, char *argv[]){
	int i;
	if (argc>0) {
		if(argv[1][0]=='1'){	
			for (i=(argc-1);i>-1;i--){
				printf("i: %d argv: %s \n",i,argv[i]);
			}
		}else{
			for (i=0; i<argc; i++){
				printf("i: %d argv: %s \n",i,argv[i]);
			}
		}
	}
	return 0;
	
}
