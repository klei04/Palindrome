/*
 * This is a program that will read in a series of characters (max 80) and check if it is a palindrome.
 * The program is not case sensitive and ignores spaces and most punctuation.
 * The program also checks for numbers.
 * Author: Kevin Lei
 * Date: 2/13/2021
 */

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {

  //Takes in user's input
  cout << "Welcome to Palindrome!" << endl;
  cout << "Please type your input." << endl;
  char playerInput[81];
  cin.get(playerInput, 81);
  cin.get();

  //Removes all spaces, punctuation, and uppercase from user's input 
  int a = 0;
  char playerInputNoSpaces[81];
  for (int b = 0; b < strlen(playerInput); b++) {
    if (playerInput[b] != ' '
	&& playerInput[b] != '.'
	&& playerInput[b] != ','
	&& playerInput[b] != '!'
	&& playerInput[b] != '?'
	&& playerInput[b] != ';'
	&& playerInput[b] != ':'
	&& playerInput[b] != '-') {
      playerInputNoSpaces[a] = tolower(playerInput[b]);
      a++;
    }
  }
  playerInputNoSpaces[a] = '\0';

  //Creates a char array that is reverse of the user's input
  char reverseInput[81];
  int d = strlen(playerInputNoSpaces) - 1;
  reverseInput[strlen(playerInputNoSpaces)] = '\0';
  for (int c = 0; c < strlen(playerInputNoSpaces); c++){
    reverseInput[d] = playerInputNoSpaces[c];
    d--;
  }

  //Checks if the reverse char array is equal to the forward char array 
  if (strcmp(playerInputNoSpaces, reverseInput) == 0) {
    cout << "Palindrome" << endl;
  } else {
    cout << "Not a palindrome" << endl;
  }
  
  return 0;
}
