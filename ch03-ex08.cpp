/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 McGreggor Kennison
 */


#include "std_lib_facilities.h"

int main() {
	
        int val = 0; // initialize val as 0
	    cout << "Please enter an integer: "; // prompt for input
	    cin >> val; // set val to input
	    string res = "even"; // set res to even
	    if (val % 2) res = "odd"; // check to see if num is odd

	    cout << "The value " << val << " is an " << res << " number\n"; // print output
    
}
