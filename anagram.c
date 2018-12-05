//An anagram in C:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alpha_to_index(char c);
int is_anagram(char text_1[], char text_2[]);

int char_val = 0;
int text_1_sum = 0;
int text_2_sum = 0;
int verdict = 0;

int main()
{
	is_anagram("fardin khan", "nidr---     af kahn");
	if (verdict == 1)
	{
		printf("The two texts are anagrams!\n");
	}
	else
	{
		printf("The two texts are not anagrams!\n");	
	}
}

int is_anagram(char text_1[], char text_2[])
{
	int text_1_len = strlen(text_1);
	int text_2_len = strlen(text_2);

	for (int i = 0; i < text_1_len; i++)
	{
		alpha_to_index(text_1[i]);
		text_1_sum += char_val;
	}
	char_val = 0;

	for (int j = 0; j < text_2_len; j++)
	{
		alpha_to_index(text_2[j]);
		text_2_sum += char_val;
	}
	char_val = 0;
	
	if (text_1_sum == text_2_sum)
	{
		verdict = 1;
	}
	else
	{
		verdict = 0;
	}
	return verdict;
}


int alpha_to_index(char c)
{
	char alphabets[54] = " ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	//if A or a:
	if (c == alphabets[1] || c == alphabets[1+26]) { char_val = 1; }
	//if B or b:
	else if (c == alphabets[2] || c == alphabets[2+26]) { char_val = 2; }
	//if C or c:
	else if (c == alphabets[3] || c == alphabets[3+26]) { char_val = 3; }
	//if D or d:
	else if (c == alphabets[4] || c == alphabets[4+26]) { char_val = 4; }
	//if E or e:
	else if (c == alphabets[5] || c == alphabets[5+26]) { char_val = 5; }
	//if F or f:
	else if (c == alphabets[6] || c == alphabets[6+26]) { char_val = 6; }
	//if G or g:
	else if (c == alphabets[7] || c == alphabets[7+26]) { char_val = 7; }
	//if H or h:
	else if (c == alphabets[8] || c == alphabets[8+26]) { char_val = 8; }
	//if I or i:
	else if (c == alphabets[9] || c == alphabets[9+26]) { char_val = 9; }
	//if J or j:
	else if (c == alphabets[10] || c == alphabets[10+26]) { char_val = 10; }
	//if K or k:
	else if (c == alphabets[11] || c == alphabets[11+26]) { char_val = 11; }
	//if L or l:
	else if (c == alphabets[12] || c == alphabets[12+26]) { char_val = 12; }
	//if M or n:
	else if (c == alphabets[13] || c == alphabets[13+26]) { char_val = 13; }
	//if N or n:
	else if (c == alphabets[14] || c == alphabets[14+26]) { char_val = 14; }
	//if O or o:
	else if (c == alphabets[15] || c == alphabets[15+26]) { char_val = 15; }
	//if P or p:
	else if (c == alphabets[16] || c == alphabets[16+26]) { char_val = 16; }
	//if Q or q:
	else if (c == alphabets[17] || c == alphabets[17+26]) { char_val = 17; }
	//if R or r:
	else if (c == alphabets[18] || c == alphabets[18+26]) { char_val = 18; }
	//if S or s:
	else if (c == alphabets[19] || c == alphabets[19+26]) { char_val = 19; }
	//if T or t:
	else if (c == alphabets[20] || c == alphabets[20+26]) { char_val = 20; }
	//if U or u:
	else if (c == alphabets[21] || c == alphabets[21+26]) { char_val = 21; }
	//if V or v:
	else if (c == alphabets[22] || c == alphabets[22+26]) { char_val = 22; }
	//if W or w:
	else if (c == alphabets[23] || c == alphabets[23+26]) { char_val = 23; }
	//if X or x:
	else if (c == alphabets[24] || c == alphabets[24+26]) { char_val = 24; }
	//if Y or y:
	else if (c == alphabets[25] || c == alphabets[25+26]) { char_val = 25; }
	//if Z or z:
	else if (c == alphabets[26] || c == alphabets[26+26]) { char_val = 26; }
	//if not a an alphabet return 0:
	else { char_val = 0; }
	//return the char_val at the end
	return char_val;
}