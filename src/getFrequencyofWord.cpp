/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)return 0;
	int i, j,flag,cnt=0,stopFlag=0;
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0, flag = 0; word[j] != '\0'; j++)
		{
			if (str[i + j] == '\0')stopFlag = 1;
			if (word[j] != str[i + j]){
				flag = 1;
				break;
			}
		}
		if (!flag)cnt++;
		if (stopFlag)break;
	}
	return cnt;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	if (*str == NULL || *word == NULL)	return 0;
	int i, flag = 1;
	for (i = 0; word[i] != '\0'; i++)
	{
		if ((str[i] != word[i]) || (str[i] == '\0'))
		{
			flag = 0; break;
		}
	}
	return flag + count_word_int_str_way_2_recursion(str + 1, word);

	return count_word_int_str_way_2_recursion(str, word);
}

/*
	The below code works for individual test cases...It will not work for all the test cases in the single program due to the usage of 
	static integer...
	
	static int cnt = 0;
	if (str[0] != '\0')
		count_word_int_str_way_2_recursion(str + 1, word);
	int flag = 1, j;
	for (j = 0; word[j] != '\0'; j++)
	{
		if ((str[j] != word[j]) || str[j] == '\0'){
			flag = 0;
			break;
		}
	}
	cnt += flag;
	return cnt;


*/