/*
 * spaces.c
 *
 * Removes spaces from the input string.
 * An exercise taken from http://www.geeksforgeeks.org/remove-spaces-from-a-given-string/.
 *
 * 
 *
 *  Created on: 19 Jun 2015
 *      Author: Miles Bryant
 */

#include<stdio.h>

main()
{
	char input[] = "g  eeks     for ge  eeks  \0";

	printf("Input: '%s'",input);


	//we could iterate through char array, and remove spaces by
	//shifting the array each time

	//but this is horribly inefficient and quite unnecessary.

	int nonSpaceCounter = 0;

	//get length of input array
	int size = sizeof(input)/sizeof(input[0]);

	int i;

	//so first count the length of the string without spaces
	for(i = 0; i < size; i++) {
		if(input[i]!=' ') {
			nonSpaceCounter++;
		}
	}
	
	//array to store the new string
	char newStr[nonSpaceCounter+1];

	//stores the next available space in the array
	int newStrIndex = 0;

	for(i = 0; i < size; i++) {
		if(input[i]!=' ') {
			newStr[newStrIndex] = input[i];
			newStrIndex++;
		}
	}
	newStr[nonSpaceCounter] = "\0";

	printf("Output: '%s'",newStr);
}

