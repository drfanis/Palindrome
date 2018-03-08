#ifndef PALINDROME_H
#define PALINDROME_H

#include <iostream>
#include <string>

class Palindrome{

	public:
	
		//class functions
		void getPhrase();
		void lowerCase();
		void removeNonLetters();
		bool testPalindrome();
	
	private:	
		
		//class variables
		std::string input,phrase;
		int phraseLength, inputLength;
};

#endif		
		
		

