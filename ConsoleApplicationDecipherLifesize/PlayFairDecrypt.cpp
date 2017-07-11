#include<iostream>
#include "PlayFairDecrypt.h"


extern char encoder[5][5];

CPlayFairDecrypt::CPlayFairDecrypt()
{
}


CPlayFairDecrypt::~CPlayFairDecrypt()
{
}

/*
convert the encoded_char_array into the vector char for deciphering preparation
a: output vector char holding the encoding msg
b: char array holding the encoding msg
*/
void CPlayFairDecrypt::get_fromCharArray(vector<char>& a, char* b, int arrLen)
{

	for (int i = 0; i < arrLen; i++) {
		if (' ' == b[i])
			continue;
		else if ('J' == b[i])
			a.push_back('I');
		else
			a.push_back(b[i]);
	}
	return;
}

void CPlayFairDecrypt::input_string(vector<char>& a)
{
	char c;
	bool aFlag = false;
	while (1)
	{
		c = getchar();
		if (c >= 97 && c <= 122)
			c -= 32;
		if (c == '\n')
		{
			if (!aFlag)
			{
				aFlag = true;
				continue;
			}
			else
				break;
		}
		else if (c < 65)
			continue;
		else if (c > 90 && c < 97)
			continue;
		else if (c > 122)
			continue;
		else if (c == 'J')
			a.push_back('I');

		a.push_back(c);
	}
	
	return;
}



void CPlayFairDecrypt::get_pos(char p, int& r, int& c)
{
	int u = 0, v = 0;
	if (p<'A' || p>'z') {
		printf("invalid char p is %c, cannot find in keysquare\n", p);
		exit(0);
	}
	else
	{
		if (p > 'Z'&&p < 'a') {
			printf("invalid char p is %c, bet Z and a, it cannot be found in keysquare\n", p);
			exit(0);
		}
	}
	for (u = 0; u < 5; u++) {
		for (v = 0; v < 5; v++) {
			if (encoder[u][v] == p)
			{
				r = u;
				c = v;
				break;
			}
		}
	}

	return;
}

void CPlayFairDecrypt::same_row(int r, vector<char>& code, int c1, int c2)
{
	code.push_back(encoder[r][(c1 + 4) % 5]);
	code.push_back(encoder[r][(c2 + 4) % 5]);
	return;
}

void CPlayFairDecrypt::same_column(int c, vector<char>& code, int r1, int r2)
{
	code.push_back(encoder[(r1 + 4) % 5][c]);
	code.push_back(encoder[(r2 + 4) % 5][c]);
	return;
}

void CPlayFairDecrypt::diff_col_row(int r1, int c1, vector<char>& code, int r2, int c2)
{
	code.push_back(encoder[r1][c2]);
	code.push_back(encoder[r2][c1]);
	return;
}

/*
decipher the msgx with len, into output code
print out the vector char code

msgx: input the encrypted msg
len: length of the message
return: vector<char >code, it holds the DECRYPED msg
*/
vector<char> CPlayFairDecrypt::decipherMsg(vector<char> msgx, int len)
{
	//	code: vector<char> holding the DECRYPED msg
	vector<char> code;

	int i = 0, j = 0;
	int r1, c1, r2, c2;
	while (i < len)
	{
		get_pos(msgx[i], r1, c1);
		i++;
		get_pos(msgx[i], r2, c2);
		if (r1 == r2)
		{
			same_row(r1, code, c1, c2);
		}
		else if (c1 == c2)
		{
			same_column(c1, code, r1, r2);
		}
		else
		{
			diff_col_row(r1, c1, code, r2, c2);
		}
		i++;
	}
	//cout << "\nCODE after Decryption is: ";
	for (j = 0; j < code.size(); j++)
	{
		if (code[j] == 'X') {
			code.erase(code.begin() + j);
			continue;
		}
		//cout << code[j];
	}

	return code;
}