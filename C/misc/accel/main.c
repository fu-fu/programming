#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

//*
int main(int argc, char *argv[]){
	FILE *fp;
	fp=fopen("accelr", O_RDONLY);
	if (fp == NULL) {
		fprintf(stderr, "Can't open input file in.list!\n");
		//exit(1);
		return 1;
	}

	sleep(600*600*600);
	fclose(fp);
	return 0;
}
// */
