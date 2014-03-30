#include <iostream>
#include <fstream>
int main(){
	std::ifstream is;
	std::filebuf * fb = is.rdbuf();

	fb->open ("/sys/devices/platform/hdaps/position",std::ios::in|std::ios::in);
	write("/home/fu-fu/
