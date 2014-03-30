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
#define array_size 64
int main(){
	int array[array_size];
	int i,j ;
        int links=16;
        int isize=array_size/links;

//	for (i=0; i<array_size; ++i)
//		array[i]=i;
	for (i=0; i<isize; ++i){
		//for(j=0;j<links;j++){
		array[i*links]=i;	
	}
	
	for (i=0; i<isize; ++i){
		for(j=0;j<links;++j){
			std::cout << array[i*links+j];
			std::cout << "\n";
		}
	}
	std::cout<<"Debug";
	for (i=0; i<array_size; ++i){
		std::cout<<array[i];
		std::cout<<"\n";
	}
}
