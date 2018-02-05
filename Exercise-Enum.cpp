

#include <iostream>
using namespace std;

enum week{sun,mon,tues,wedn,thurs,frid};

int main()
{
	week today;
	today = wedn;
	cout<<"day" << today+1;
	return 0;
}

