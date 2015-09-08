/*
 * spaces.c
 *
 *  Created on: 19 Jun 2015
 *      Author: miles
 */

#include<stdio.h>

main()
{
	char input[] = "g  eeks     for ge  eeks  \0";

	printf("Input: '%s'",input);

	int nonSpaceCounter = 0;
	int size = sizeof(input)/sizeof(input[0]);

	int i;

	for(i = 0; i < size; i++) {
		if(input[i]!=' ') {
			nonSpaceCounter++;
		}
	}

	char newStr[nonSpaceCounter+1];

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

