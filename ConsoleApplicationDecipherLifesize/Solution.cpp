/*
* C++ Program to Decode a secret Message Using Playfair Cipher
*/
#include<iostream>
#include<vector>
#include <string>
#include <fstream>
#include "PlayFairDecrypt.h"
#include "KeySquare.h"

using namespace std;

char encoder[5][5] = {
	{ 'Q','U','I','Z','M' },
	{ 'A','S','T','E','R' },
	{ 'B','C','D','F','G' },
	{ 'H','K','L','N','O' },
	{ 'P','V','W','X','Y' } };
char encoded_char[103] = "AWHGSEHONRTXZLFZNHTELZBSIWHOLZHDBSSNWEETEAQTWEILGYWDRTVTRZARUVKGSXFVARLYEDTXWKZNARUIRTESXOLZNGMYSELMFN";
const int gArrlen = 102;

int main()
{
	char c;
	int choice=5;
	//vector char holding the encrypted message msg
	vector<char> msg;
	vector<string> aVecString;
	vector<string>::const_iterator aPtr;
	ofstream outPrintFile("outPlayFair.txt", ios::out);

	if (!outPrintFile) {
		cerr << "file could not be opened." << endl;
		exit(1);
	}

	//generate the en-keysquare vector
	CKeySquare* ptrEnKey = new CKeySquare();
	ptrEnKey->setVecCharArrKeySquare();
	aVecString = ptrEnKey->getVecCharArrKeySquare();

	cout << "finish create the Vector of EnKey" << endl;
	outPrintFile << "finish create the Vector of EnKey" << endl;

	//convert the encoded secret char array into the vector char
	CPlayFairDecrypt* ptrDeCryption = new CPlayFairDecrypt();

	while (1) {
		cout<<"please chose input encoded secret msg source"<<endl;
		cout << "1. input by command line from Test Encoder files" << endl;
		cout << "2. input by source code already" << endl;
		cout << "E: exit" << endl;
		c = getchar();
		if (c == '1')
		{
			choice = 1;// ptrDeCryption->input_string(msg);
			break;
		}
		else if (c == '2')
		{
			choice = 2;// ptrDeCryption->get_fromCharArray(msg, encoded_char, gArrlen);
			break;
		}
		else if (c == 'E')
		{
			cout << "BB" << endl;
			exit(0);
		}
	}

	switch (choice)
	{
	case 1:
		ptrDeCryption->input_string(msg);
		break;
	case 2:
		ptrDeCryption->get_fromCharArray(msg, encoded_char, gArrlen);
		break;
	default:
		break;
	}
	int len = msg.size();
	std::cout << "start to decoding the msg...." << endl;
	std::cout << "###############"<<endl<<endl;

	outPrintFile << "start to decoding the msg...." << endl;
	outPrintFile << "###############" << endl << endl;

	int varNo = 1;
	for (aPtr = aVecString.begin(); aPtr != aVecString.end(); ++aPtr) 
	{
		cout << "\nNo "<<varNo<<" Encrption Key is: "<< (*aPtr) << endl;
		outPrintFile << "\nNo " << varNo << " Encrption Key is: " << (*aPtr) << endl;
		//Update the encoder[5][5] array
		int n = 0;
		for (int k = 0; k < 5; k++) {
			for (int l = 0; l < 5; l++) {
				encoder[k][l] = (*aPtr).at(n);
				n++;
			}
		}
		//decipher the message
		vector<char> vcode = ptrDeCryption->decipherMsg(msg, len);

		//convert vector char to plain text string;
		std::string requestedName;
		for (auto letter : vcode)
			requestedName += letter;

		cout << "\nFinal plain text No "<<varNo<<" is "<<requestedName << endl;
		outPrintFile << "\nFinal plain text No " << varNo << " is " << requestedName << endl;
		varNo++;
	}

	return 0;
}