#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[]){
	int fd;
//	fd = open("/dev/mem", O_RDONLY);
//	lseek(fd,0,SEEK_SET);
	/*int bs=1024*1024*512;
	char buff[1024*1024*1024];
	read(fd,buff,bs);
	printf("%d",buff); */
//*
	int de=1;
	int c=0;
	int bs=1;//024*1024;	//1024*1024*1024;
	char buff[bs];
//	char errno="uuuuuuuuuuuuuuuuugh";
	fd = open(argv[1], O_RDONLY);
	lseek(fd,0,SEEK_SET);
//	int loc=0;
	while (de){
		c=c+1;
		de = read(fd,buff,bs);
		printf("%s",buff);
//		loc=loc+de;
		lseek(fd,de,SEEK_CUR);
	//	fprintf(stderr, "de= %d\n cont=%d\n error= %d\n",de,c,errno);
	//	if (de==-1){
	//		break;
	//	}
	}
	close(fd);
	return 0;
//*/
}
