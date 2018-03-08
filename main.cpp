#include <iostream>
#include <ctype.h>
#include <string.h>
#include "Palindrome.h"
using namespace std;

int main(){

	Palindrome test;
	test.getPhrase();
	test.lowerCase();
	test.removeNonLetters();
	
	if (test.testPalindrome()){
		cout << "Yes\n";
	}else{
		cout << "No\n";
	}
	
}
