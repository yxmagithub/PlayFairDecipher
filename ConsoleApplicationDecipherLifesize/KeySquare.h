#pragma once
#include <vector>
#include <string>
#include<iostream>

using namespace std;

class CKeySquare
{
public:
	CKeySquare();
	~CKeySquare();


	inline vector <string> getVecCharArrKeySquare() 
		{	
		return mVecString;
		}

	void setVecCharArrKeySquare();
	void configureKeySquare();
	string displayKeySquareStrByInd(int ind);
	int getCurKeySquareInd() { return mKeySquareInd; }

private:
	vector <string> mVecString;
	int mKeySquareInd;
};

