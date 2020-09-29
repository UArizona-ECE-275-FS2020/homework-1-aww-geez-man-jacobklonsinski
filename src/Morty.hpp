/*
 __  __            _               _
|  \/  | ___  _ __| |_ _   _      | |__  _ __  _ __
| |\/| |/ _ \| '__| __| | | |     | '_ \| '_ \| '_ \
| |  | | (_) | |  | |_| |_| |  _  | | | | |_) | |_) |
|_|  |_|\___/|_|   \__|\__, | (_) |_| |_| .__/| .__/
					   |___/            |_|   |_|
*/

#include <string> 
#include <iostream>


/* Extra credit below:
namespace interdimensional {
	// Declare enumeration to hold the dimensions each Morty is from
	enum dimension {UNKNOWN = -1, C137, Z286};

	// Declare a structure to hold the arguments passed to the function
	struct args {
		int start;
		int stop;
		int step;
		dimension dim;
	};

	// Declare a function to parse the args and return the above declared structure
	args parseArgs(int c, char** v);

}
*/

// =========================================================================== // 
//          Declare Namespace C137 and enclosed functions here 
// =========================================================================== // 

namespace C137 {

	typedef int num;

	void words(num a) {

		int b = a % 3;
		int c = a % 5;
		int d = a % 15;
		int space = 0;

		if (b == 0) {
			std::cout << "Aww";
			space++;
		}
		if (c == 0) {
			if (space == 1) {
				std::cout << " ";
			}
			std::cout << "Geez";
		}
		if (d == 0) {
			std::cout << " ";
			std::cout << "Man";
		}

	}

}


// =========================================================================== // 
//          Declare Namespace Z286 and enclosed functions here 
// =========================================================================== //

namespace Z286 {

	typedef int num;

	void words(num a) {

		int b = a % 3;
		int c = a % 5;
		int d = a % 15;

		if (d == 0) {
			std::cout << "naM zeeG wwA";
		}
		else if (b == 0) {
			std::cout << "naM";
		}
		else if (c == 0) {
			std::cout << "zeeG";
		}

	}

}
