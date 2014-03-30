#include <stdio.h>

//example 15, pointers.

int main(int argc, char *argv[]){
	int ages[]={0,1,2,3,4,5};
	char *names[]={"Nope","Allice","Bob","Charlie","Dog","Europe"};
	int count=sizeof(ages)/sizeof(int);
	int i=0;
	
	//first way using indexing.
	for(i=0;i<count;i++){
		printf("%s, is %d old.\n",names[i],ages[i]);
	}
	printf("-------------NEWLINE-------------\n");
	//Second way, using pointers
	int *cur_age=ages;
	char **cur_name=names;

	for(i=0;i<count;i++){
		printf("%s, is %d old.\n",
		*(cur_name+i),*(cur_age+i));
	}
	
	printf("-------------NEWLINE-------------\n");
	//Third way, ponters are just arrays
	for(i=0;i<count;i++){
		printf("%s, is %d old.\n",
		cur_name[i],cur_age[i]);
	}

	printf("-------------NEWLINE-------------\n");
	//FORTH WAY. WITH POINTERS IN A STUPID COMPLEX WAY.
	
	for(cur_name =  names , cur_age = ages ; (cur_age-ages) < count; cur_name++ , cur_age++ ){
		printf("%s,is%dold.\n",*cur_name,*cur_age);
	}
	return 0;
}
