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

using namespace std;

namespace C137 {
    void Morty(int start, int stop) {
        for (int i = start; i <= stop; i++) {
            if (i % 15 == 0) {
                cout << i << ": Aww Geez Man" << endl;
            }
            else if (i % 3 == 0) {
                cout << i << ": Aww" << endl;
            }
            else if (i % 5 == 0) {
                cout << i << ": Geez" << endl;
            }
            else {
                cout << i << ":" << endl;
            }
        }
    }

    void Morty(int start, int stop, int step) {
        for (int i = start; i <= stop; i = i + step) {
            if (i % 15 == 0) {
                cout << i << ": Aww Geez Man" << endl;
            }
            else if (i % 3 == 0) {
                cout << i << ": Aww" << endl;
            }
            else if (i % 5 == 0) {
                cout << i << ": Geez" << endl;
            }
            else {
                cout << i << ":" << endl;
            }
        }
    }

}

namespace Z286 {
    void Morty(int start, int stop) {
        for (int i = start; i <= stop; i++) {
            if (i % 15 == 0) {
                cout << i << ": naM zeeG wwA" << endl;
            }
            else if (i % 3 == 0) {
                cout << i << ": wwA" << endl;
            }
            else if (i % 5 == 0) {
                cout << i << ": zeeG" << endl;
            }
            else {
                cout << i << ":" << endl;
            }
        }
    }

    void Morty(int start, int stop, int step) {
        for (int i = start; i <= stop; i = i + step) {
            if (i % 15 == 0) {
                cout << i << ": naM zeeG wwA" << endl;
            }
            else if (i % 3 == 0) {
                cout << i << ": wwA" << endl;
            }
            else if (i % 5 == 0) {
                cout << i << ": zeeG" << endl;
            }
            else {
                cout << i << ":" << endl;
            }
        }
    }
}

int main(int argc, char** argv) {

    int start = strtol(argv[1], NULL, 10);
    int stop = strtol(argv[2], NULL, 10);
    int step;
    string dimension;

    if (ac != 4 and ac != 5) {
        std::cout << "Error: Command line arguments are incorrect. Call program as (1) or (2)" << std::endl;
	std::cout << "(1)\t./AwwGeezMan {start} {stop} {dimension}" << std::endl;
	std::cout << "(2)\t./AwwGeezMan {start} {stop} {step} {dimension}" << std::endl;	
	return -1;
    }
    else if (argc == 4) {
        dimension = argv[3];
    }
    else if (argc == 5) {
        step = strtol(argv[3], NULL, 10);
        dimension = argv[4];
    }

    if (dimension == "C137") {
        if (argc == 4) {
            C137::Morty(start, stop);
        }
        else if (argc == 5) {
            C137::Morty(start, stop, step);
        }
    }
    else if (dimension == "Z286") {
        if (argc == 4) {
            Z286::Morty(start, stop);
        }
        else if (argc == 5) {
            Z286::Morty(start, stop, step);
        }
    }
    

    return 0;
}

