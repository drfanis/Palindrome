#include <iostream>
#include <string>
#include "Palindrome.h"
using namespace std;

void Palindrome::getPhrase(){

	getline(cin, input);
	inputLength = input.length();
	
}

void Palindrome::lowerCase(){

	//change all elements of input to lowercase
	for( int i = 0; i < inputLength; i++ ){
		input[i] = tolower(input[i]);
	}

}

void Palindrome::removeNonLetters(){

	phraseLength = 0;

	//if the char at input[i] is a letter, copy it to phrase
	for( int i = 0; i < inputLength; i++ ){
		if( isalpha(input[i])){
			phrase[phraseLength] = input[i];
			phraseLength++;
		}
	}
}

bool Palindrome::testPalindrome(){

	//if the phrase has no letters, its not a palindrome
	if( phraseLength == 0 ){
		return false;
	}

	//if any of the letters ruin the symmetry, end function and return false
	for( int i = 0; i < phraseLength/2; i++ ){
		if( phrase[i] != phrase[phraseLength-(i+1)] ){
			return false;
		}
	}

	//if the program does not end prematurely then it must be a palindrome
	return true;
	
}
