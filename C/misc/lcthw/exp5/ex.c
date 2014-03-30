#include <stdio.h>

int main(int argc, char *argv[]){
	int areas[]={10,20,30,31,40};
	char name[]= "Ace";
	char testname[]={
	'A','B','C','\0'};
	printf("Sizeof int %ld\n",sizeof(int));
	printf("Sizeof areas %ld\n",sizeof(areas)); 
	printf("Sizeof char %ld\n",sizeof(char));
	printf("Sizeof testname %ld\n",sizeof(testname));
	
	printf("Name: %s\tFull Name%s\n",name,testname);
	printf("Size: %ld\tSize:%ld\n",sizeof(name),sizeof(testname));
	testname[3]='E';
	printf("testname: %sblahblah",testname);
	
}
