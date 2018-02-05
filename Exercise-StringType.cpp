#include "console"
#include <simpio.h>
#include <string>
#include <iostream>
using namespace std;


int main()
{

	string myName="Mike";//write your name there.
	while(true){
		cout <<"enter your name(or'quit' to exit):";
		string username = getline();
		if(username == "julie"){
			cout << "hi,julie! welcome back!" << endl;
		}else if(username == "quit"){
			cout << endl;
			break;
		}else if(username !=myname){
			cout <<"hello," << username <<endl;
		}else{
			cout << "oh,its you," << myname << endl;
		}

}
     return 0;
}
