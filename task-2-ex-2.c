#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{

	int count = 10;
	int * temp;
	int sum = 0;

	temp = &count;

	*temp = 20;

	temp = &sum;

	*temp = count;

	cout << "count = " << count << "   *temp =  " << *temp << "  sum = " << sum << endl;

	return 0;

}/* end main */
