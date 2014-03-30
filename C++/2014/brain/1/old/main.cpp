/*

	A nuron,
		//Connects to other nurons.
		Threshold value before they can trigger.
		Dendrites reach to other nurons axions (input)
		Axions reach to to other nurons dendrites (output)
		Weight of input of dendrites very.
	System,
		Input nurons, for each charecter of STDIN
		Output, for each key on keyboard/STDOUT
	Alt-System,
		Input nuron, for char at X and Y, controlled by output of X/Y "Looking" sort of behavour. (Passive notice change??? idk.)
		Output, chars of keyboard.
	Notes,
		Position in space is non-issue for virtual system, any nuron can connect to any others. (Unless added in to make it such.)
		
*/
/*
	Basic test-code for a nuron and system.
	Run each nuron once, in a read-only. Apply changes, repeat.
		Two arrays, cur, new. 
	Arbitarly, define 1000 ticks as 1 second.
	Each nuron has a list of nurons it influences...?
		(Object orientedness?)
		How can I do this without messing with objects??
			A list.. with lists in it maybeh?
				matrix?
		
*/
#include <iostream>
int main(){
int links=16;
int asize=65535;
//int array[size][255];
//int** array = new int*[asize];
//int array[asize*links];
int array[1048576];
int i,j ;

//for (int i = 0; i < asize; ++i)
//    array[i] = new int[links];

//int main(){
/*
	Init.	
*/	
//for (i=0; i <=asize; i++){
//	for (j=0; j <=links; j++){
//		array[i*asize+j]=(i);
for (i=0; i<1048576; ++i)
	array[i]=i;
for (i=0; i<1048576; ++i){
	std::cout <<array[i];
	std::cout << "\n";
}
//		array[i][j]=(i+j);
//		std::cout << i+j;
//		std::cout << "\n";
//	}
//}


/*for (i=0; i <=asize; i++){
        for (j=0; j <=links; j++){
                std::cout << array[i*asize+j];
        }
}
*/
}
