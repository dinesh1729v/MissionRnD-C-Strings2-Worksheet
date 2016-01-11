/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)return NULL;
	int i, prev = 0, flag = 1, j = 0;
	char *words = (char*)calloc(100, sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' '&&str[i + 1] == ' ')continue;
		if (str[i] == ' '&&str[i + 1] != ' '){
			j = 0; continue;
		}
		words[j] = str[i];
		j++;
		if (str[i + 1] == ' ' || str[i + 1] == '\0')words[j] = '\0';
	}
	return words;
}
/*
		if ((str[i] == ' ')&&(str[i + 1] != ' '&&str[i+1]!='\0'))prev = i;
	char *lastWord = (char*)malloc(sizeof(char)*(i - prev));
	for (int j = prev+1;str[j]!=' '&&str[j]!='\0'; j++)for (i = 0; str[i] != '\0'; i++)

		lastWord[j - prev-1] = str[j];


*/