#pragma once

#include<vector>
using namespace std;

class CPlayFairDecrypt
{
public:
	CPlayFairDecrypt();
	~CPlayFairDecrypt();

	/*
	convert the encoded_char_array into the vector char for deciphering preparation
	a: output vector char holding the encoding msg
	b: char array holding the encoding msg
	*/
	void get_fromCharArray(vector<char>& a, char* b, int arrLen);


	void input_string(vector<char>& a);


	void get_pos(char p, int& r, int& c);


	void same_row(int r, vector<char>& code, int c1, int c2);


	void same_column(int c, vector<char>& code, int r1, int r2);


	void diff_col_row(int r1, int c1, vector<char>& code, int r2, int c2);

	/*
	decipher the msgx with len, into output code
	print out the vector char code

	msgx: input the encrypted msg
	len: length of the message
	return: vector<char >code, it holds the DECRYPED msg
	*/
	vector<char> decipherMsg(vector<char> msgx, int len);


};

