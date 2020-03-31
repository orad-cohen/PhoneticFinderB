/**
 * Demo program for Gimatriya calculation.
 * 
 * Date: 2020-02
 */

#include "PhoneticFinder.hpp"

#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
	string text1 = "xxx abcdefghijklmnopqrstuvwxyZ yyy";
	cout << "first" << endl;
	cout << phonetic::find(text1, "abcdefghijklmnopqrstuvwxyz") << endl; // should print "Dond"
	cout << phonetic::find(text1, "abcdefghijklmnoiqrstuvwxyz") << endl;   // should print "vorri"
	
}
