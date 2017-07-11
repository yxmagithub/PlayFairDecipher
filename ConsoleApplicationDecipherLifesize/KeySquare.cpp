#include <iostream>
#include <string>
#include "KeySquare.h"

using namespace std;

CKeySquare::CKeySquare()
{
	mVecString = {};
}


CKeySquare::~CKeySquare()
{
}


void CKeySquare::setVecCharArrKeySquare()
{
	string lStr;

	//{ { 'Q','U','I','Z','M' },
	//{ 'A','S','T','E','R' },
	//{ 'B','C','D','F','G' },
	//{ 'H','K','L','N','O' },
	//{ 'P','V','W','X','Y' } };
		
	lStr.assign("QUIZMASTERBCDFGHKLNOPVWXY");//0
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());
	//	std::cout <<"Empty string is"<< lStr << '\n';

	//{ { QUIZM },
	//{ ASTER },
	//{ VWXYB },
	//{ CDFGH },
	//{ KLNOP } };

	lStr.assign("QUIZMASTERVWXYBCDFGHKLNOP");//1
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{PVWXY },
	//{ HKLNO },
	//{ BCDFG },
	//{ ASTER },
	//{ QUIZM } };

	lStr.assign("PVWXYHKLNOBCDFGASTERQUIZM");
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{KLNOP },
	//{ CDFGH },
	//{ VWXYB },
	//{ ASTER },
	//{ QUIZM } };

	lStr.assign("KLNOPCDFGHVWXYBASTERQUIZM");//3
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MZIUQ},
	//{ RETSA},
	//{ GFDCB},
	//{ ONLKH},
	//{ YXWVP} };

	lStr.assign("MZIUQRETSAGFDCBONLKHYXWVP");
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MZIUQ},
	//{ RETSA},
	//{ BYXWV},
	//{ HGFDC},
	//{ PONLK} };

	lStr.assign("MZIUQRETSABYXWVHGFDCPONLK");//5
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{YXWVP},
	//{ ONLKH },
	//{ GFDCB },
	//{ RETSA },
	//{ MZIUQ } };

	lStr.assign("YXWVPONLKHGFDCBRETSAMZIUQ");
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{PONLK},
	//{ HGFDC},
	//{ BYXWV },
	//{ RETSA},
	//{ MZIUQ} };

	lStr.assign("PONLKHGFDCBYXWVRETSAMZIUQ");//7
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());


	//{{QABHP},
	//{ USCKV},
	//{ ITDLW },
	//{ ZEFNX},
	//{ MRGOY } };

	lStr.assign("QABHPUSCKVITDLWZEFNXMRGOY");//8
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{QAVCK},
	//{ USWDL},
	//{ ITXFN },
	//{ ZEYGO },
	//{ MRBHP } };

	lStr.assign("QAVCKUSWDLITXFNZEYGOMRBHP");//9
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{PHBAQ},
	//{ VKCSU },
	//{ WLDTI },
	//{ XNFEZ },
	//{ YOGRM } };

	lStr.assign("PHBAQVKCSUWLDTIXNFEZYOGRM");//X
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{KCVAQ},
	//{ LDWSU },
	//{ NFXTI},
	//{ OGYEZ  },
	//{ PHBRM } };

	lStr.assign("KCVAQLDWSUNFXTIOGYEZPHBRM");//X1
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MRGOY },
	//{ ZEFNX},
	//{ ITDLW},
	//{ USCKV},
	//{ QABHP} };

	lStr.assign("MRGOYZEFNXITDLWUSCKVQABHP");//X2
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MRBHP},
	//{ ZEYGO },
	//{ ITXFN },
	//{ USWDL },
	//{ QAVCK } };

	lStr.assign("MRBHPZEYGOITXFNUSWDLQAVCK");//X3
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{YOGRM},
	//{ XNFEZ },
	//{ WLDTI },
	//{ VKCSU },
	//{ PHBAQ } };

	lStr.assign("YOGRMXNFEZWLDTIVKCSUPHBAQ");//X4
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{PHBRM},
	//{ OGYEZ },
	//{ NFXTI},
	//{ LDWSU  },
	//{ KCVAQ } };

	lStr.assign("PHBRMOGYEZNFXTILDWSUKCVAQ");//X5
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{QUIZM},
	//{ HKLNA},
	//{ GXYOS },
	//{ FWVPT},
	//{ DCBRE   } };

	lStr.assign("QUIZMHKLNAGXYOSFWVPTDCBRE");//X6
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{QUIZM},
	//{ CDFGA},
	//{ BOPHS},
	//{ YNLKT},
	//{ XWVRE } };

	lStr.assign("QUIZMCDFGABOPHSYNLKTXWVRE");//X7
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{DFGHQ},
	//{ CWXKU },
	//{ BVYLI },
	//{ RPONZ },
	//{ ETSAM } };

	lStr.assign("DFGHQCWXKUBVYLIRPONZETSAM");//X8
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{XYBCQ},
	//{ WNODU},
	//{ VLPFI},
	//{ RKHGZ},
	//{ ETSAM} };

	lStr.assign("XYBCQWNODUVLPFIRKHGZETSAM");//X9
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{ERBCD},
	//{ TPVWF},
	//{ SOYXG},
	//{ ANLKH},
	//{ MZIUQ} };

	lStr.assign("ERBCDTPVWFSOYXGANLKHMZIUQ");//XX
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{ERVWX},
	//{ TKLNY },
	//{ SHPOB },
	//{ AGFDC },
	//{ MZIUQ } };

	lStr.assign("ERVWXTKLNYSHPOBAGFDCMZIUQ");//XX1
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MASTE},
	//{ ZNOPR},
	//{ ILYVB},
	//{ UKXWC},
	//{ QHGFD} };

	lStr.assign("MASTEZNOPRILYVBUKXWCQHGFD");//XX2
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MASTE},
	//{ ZGHKR},
	//{ IFPLV},
	//{ UDONW},
	//{ QCBYX} };

	lStr.assign("MASTEZGHKRIFPLVUDONWQCBYX");//XX3
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{QHGFD},
	//{ UKXWC},
	//{ ILYVB},
	//{ ZNOPR},
	//{ MASTE} };

	lStr.assign("QHGFDUKXWCILYVBZNOPRMASTE");//XX4
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{QCBYX},
	//{ UDONW},
	//{ IFPLV},
	//{ ZGHKR},
	//{ MASTE  } };

	lStr.assign("QCBYXUDONWIFPLVZGHKRMASTE");//XX5
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MZIUQ},
	//{ ANLKH},
	//{ SOYXG },
	//{ TPVWF },
	//{ ERBCD } };

	lStr.assign("MZIUQANLKHSOYXGTPVWFERBCD");//XX6
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{MZIUQ},
	//{ AGFDC },
	//{ SHPOB },
	//{ TKLNY },
	//{ ERVWX } };

	lStr.assign("MZIUQAGFDCSHPOBTKLNYERVWX");//XX7
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{ETSAM},
	//{ RPONZ},
	//{ BVYLI},
	//{ CWXKU},
	//{ DFGHQ} };

	lStr.assign("ETSAMRPONZBVYLICWXKUDFGHQ");
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{ETSAM},
	//{ RKHGZ},
	//{ VLPFI},
	//{ WNODU},
	//{ XYBCQ} };

	lStr.assign("ETSAMRKHGZVLPFIWNODUXYBCQ");//XX9
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{DCBRE},
	//{ FWVPT },
	//{ GXYOS},
	//{ HKLNA},
	//{ QUIZM} };

	lStr.assign("DCBREFWVPTGXYOSHKLNAQUIZM");//XXX
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	//{{XWVRE},
	//{ YNLKT},
	//{ BOPHS},
	//{ CDFGA},
	//{ QUIZM} };

	lStr.assign("XWVREYNLKTBOPHSCDFGAQUIZM");//XXX1
	mVecString.push_back(lStr);
	lStr.erase(lStr.begin(), lStr.end());

	return;
	
}

void CKeySquare::configureKeySquare() {

	int retInd = 0;
	char c;
	char c1;
		string lastInLine;
		while (1)
		{
			cout<<"please input keysquare in RowColumn pattern or Spiral pattern, \n"<<"RowColumn input 0, Spiral input 1, exit input E\n"<<endl;
			c = getchar();
			if (c == '0') {
				retInd = 0;
				break;
			}
			else if (c == '1') {
				retInd = 16;
				break;
			}
			else if (c == 'E')
			{
				cout << "you donot finish, please try again later \n" << endl;
				exit(2);
			}
		}

		while (1)
		{
			if (retInd == 0) {
				cout << "you are in the Row Column pattern" << endl;
				cout << "please input Row as 0, column as 1, exit as E" << endl;
				c1 = getchar();
				if (c1 == '0') {
					retInd = 0;
					break;
				}
				else if (c1 == '1') {
					retInd = 8;
					break;
				}
				else if (c1 == 'E')
				{
					cout << "you donot finish, please try again later \n" << endl;
					exit(2);
				}
			}
			else if (retInd == 16) {
				cout << "you are in the Spiral pattern" << endl;
				cout << "please input Clockwise as 0, AntiClock as 1, exit as e" << endl;
				c1 = getchar();
				if (c1 == '0') {
					retInd += 0;
					break;
				}
				else if (c1 == '1') {
					retInd += 8;
					break;
				}
				else if (c1 == 'E')
				{
					cout << "you donot finish, please try again later \n" << endl;
					exit(2);
				}
			}
			else {
				cout << "retInd is wrong, you donot finish, please try again later \n" << endl;
				return;
			}
		}//while

		bool aFlag = false;
		lastInLine.clear();
		cout << 1 << std::flush;
		//final input
		while (1)
		{
			switch (retInd)
			{
			case 0:
				cout << "\nyou are in the Row pattern" << endl;
				cout << "please input the following string pattern, E as exit" << endl;
				cout << "please input left to right as L, right to left as R" << endl;
				cout << "please input Ceiling to Floor as C, Floor to Ceiling as F" << endl;
				cout << "please input Trailing BCD as TB, Trailing VWXY as TV" << endl;
				cout << "example is LCTB " << endl;
				std::getline(std::cin, lastInLine);
				if (!lastInLine.compare("LCTB")) {
					retInd = 0;
					aFlag = true;
				}
				else if (!lastInLine.compare("LCTV")) {
					retInd = 1;
					aFlag = true;
				}
				else if (!lastInLine.compare("LFTB")) {
					retInd = 2;
					aFlag = true;
				}
				else if (!lastInLine.compare("LFTV")) {
					retInd = 3;
					aFlag = true;
				}
				else if (!lastInLine.compare("RCTB")) {
					retInd = 4;
					aFlag = true;
				}
				else if (!lastInLine.compare("RCTV")) {
					retInd = 5;
					aFlag = true;
				}
				else if (!lastInLine.compare("RFTB")) {
					retInd = 6;
					aFlag = true;
				}
				else if (!lastInLine.compare("RFTV")) {
					retInd = 7;
					aFlag = true;
				}
				else if (!lastInLine.compare("E"))
				{
					std::cout<< "you donot finish, please try again later \n" << endl;
					exit(2);
				}
				else
				{
					cout << "input the wrong text string, do it again!" << endl;
				}
				break;
			case 8:
				cout << "\nyou are in the Column pattern" << endl;
				cout << "please input the following string pattern, E as exit" << endl;
				cout << "please input Ceiling to Floor as C, Floor to Ceiling as F" << endl;
				cout << "please input left to right as L, right to left as R" << endl;
				cout << "please input Trailing BCD as TB, Trailing VWXY as TV" << endl;
				cout << "example is CLTB "<<endl;
				std::getline(std::cin, lastInLine);
				if (!lastInLine.compare("CLTB")) {
					retInd += 0;
					aFlag = true;
				}
				else if (!lastInLine.compare("CLTV")) {
					retInd += 1;
					aFlag = true;

				}
				else if (!lastInLine.compare("CRTB")) {
					retInd += 2;
					aFlag = true;
				}
				else if (!lastInLine.compare("CRTV")) {
					retInd += 3;
					aFlag = true;
				}
				else if (!lastInLine.compare("FLTB")) {
					retInd += 4;
					aFlag = true;
				}
				else if (!lastInLine.compare("FLTV")) {
					retInd += 5;
					aFlag = true;
				}
				else if (!lastInLine.compare("FRTB")) {
					retInd += 6;
					aFlag = true;
				}
				else if (!lastInLine.compare("FRTV")) {
					retInd += 7;
					aFlag = true;
				}
				else if (!lastInLine.compare("E"))
				{
					cout << "you donot finish, please try again later \n" << endl;
					exit(2);
				}
				else
				{
					cout<<"input the wrong text string, do it again!"<<endl;
				}
				break;
			case 16:
			case 24:
				cout << "\nyou are in the Clockwise or AntiClockwise Spiral pattern" << endl;
				cout << "please input the following string pattern, E as exit" << endl;
				cout << "please input Q begining position northwest as NW, northeast as NE" << endl;
				cout << "please input southeast as SE, southwest as SW" << endl;
				cout << "please input Trailing BCD as TB, Trailing VWXY as TV" << endl;
				cout << "example is NWTB " << endl;
				std::getline(std::cin, lastInLine);
				if (!lastInLine.compare("NWTB")) {
					retInd += 0;
					aFlag = true;
				}
				else if (!lastInLine.compare("NWTV")) {
					retInd += 1;
					aFlag = true;
				}
				else if (!lastInLine.compare("NETB")) {
					retInd += 2;
					aFlag = true;
				}
				else if (!lastInLine.compare("NETV")) {
					retInd += 3;
					aFlag = true;
				}
				else if (!lastInLine.compare("SETB")) {
					retInd += 4;
					aFlag = true;
				}
				else if (!lastInLine.compare("SETV")) {
					retInd += 5;
					aFlag = true;
				}
				else if (!lastInLine.compare("SWTB")) {
					retInd += 6;
					aFlag = true;
				}
				else if (!lastInLine.compare("SWTV")) {
					retInd += 7;
					aFlag = true;
				}
				else if (!lastInLine.compare("E"))
				{
					cout << "you donot finish, please try again later \n" << endl;
					exit(2);
				}
				else
				{
					cout << "input the wrong text string, do it again!" << endl;
				}
				break;
			default:
				cout << "retInd is wrong again, please try again later \n" << endl;
				return;
				break;
			}//switch
			lastInLine.clear();
			if (aFlag)
				break;
		}
		mKeySquareInd = retInd;
		return;

}
string CKeySquare::displayKeySquareStrByInd(int ind) {
	
	string retStr;

	retStr = mVecString.at(ind);
	cout << "######" << endl;
	cout << retStr.substr(0, 5) << '\n';
	cout << retStr.substr(5, 5) << '\n';
	cout << retStr.substr(10, 5) << '\n';
	cout<< retStr.substr(15, 5) << '\n';
	cout<< retStr.substr(20, 5) <<endl;
	cout << "######" << endl;
	return retStr;
}
