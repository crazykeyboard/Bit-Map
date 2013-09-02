#include <iostream>
#include "multiBitmap.h"
using namespace  std;

int main(int argc, char** argv)
{
	CMultiBitMap testBitset(100) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;
	testBitset.setAll(true) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;
	testBitset.setAll(false) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;

	testBitset.setBit(0, true) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;
	testBitset.setBit(99, true) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;

	if (testBitset.getBit(0))
		cout << "OK" << endl;
	if (testBitset.getBit(99))
		cout << "OK" << endl;

	testBitset.resize(200) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;

	testBitset.setAll(true) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;
	testBitset.setAll(false) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;

	testBitset.setBit(0, true) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;
	testBitset.setBit(199, true) ;
	cout << "num of one£º" << testBitset.oneCount() << endl;

	if (testBitset.getBit(0))
		cout << "OK" << endl;
	if (testBitset.getBit(199))
		cout << "OK" << endl;


	return 0 ;
}