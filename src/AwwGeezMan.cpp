/*
 _____ ____ _____   ____ _____ ____
| ____/ ___| ____| |___ \___  | ___|
|  _|| |   |  _|     __) | / /|___ \
| |__| |___| |___   / __/ / /  ___) |
|_____\____|_____| |_____/_/  |____/

 _   _                                         _      _
| | | | ___  _ __ ___   _____      _____  _ __| | __ / |
| |_| |/ _ \| '_ ` _ \ / _ \ \ /\ / / _ \| '__| |/ / | |
|  _  | (_) | | | | | |  __/\ V  V / (_) | |  |   <  | |
|_| |_|\___/|_| |_| |_|\___| \_/\_/ \___/|_|  |_|\_\ |_|


Aww Geez Man: Interdimensional Mortys.

One of Morty C137's favorite phrases is "Aww Geez Man". But, in dimension Z286, there
exists a Morty who says everything backwards.

*/

// Include the Morty header file
#include "Morty.hpp"
#include <iostream>
#include <stdlib.h>

void Morty(int a, int b, int c, std::string dim) {
	
	int i;

	for (i = a; i <= b; i += c) {
		std::cout << i << ": ";
		if (dim == "C137") {
			C137::words(i);
		}
		else if (dim == "Z286") {
			Z286::words(i);
		}
		std::cout << std::endl;
	}

}

void Morty(int a, int b, std::string dim) {

	int i;
	
	for (i = a; i <= b; i++) {
		std::cout << i << ": ";
		if (dim == "C137") {
			C137::words(i);
		}
		else if (dim == "Z286") {
			Z286::words(i);
		}
		std::cout << std::endl;
	}

}


int main(int ac, char** av) {
	// Parse the command line arguments. The program is executed as
	// ./AwwGeezMan {start} {stop} {dimension}
	// or 
	// ./AwwGeezMan {start} {stop} {step} {dimension}
	if (ac != 4 and ac != 5) {
		std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)"
			<< std::endl;
		std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
		std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;

		return -1;
	}

	// Parse the command line arguments
	if (ac == 4) {
		int start = atoi(*(av + 1));
		int stop = atoi(*(av + 2));
		std::string dimension = *av + 3;
		Morty(start, stop, dimension);
	}
	else {
		if (ac == 5) {
			int start = atoi(*(av + 1));
			int stop = atoi(*(av + 2));
			int step = atoi(*(av + 3));
			std::string dimension = *av + 4;
			Morty(start, stop, step, dimension);
		}
	}


	// Depending on the dimension of the arguments, call the appropriate Morty
	// function


	return 0;
}

