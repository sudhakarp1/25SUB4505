#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fobj("ioThree.cpp");
	char ch;
	while ( fobj.get(ch))
		cout<<ch;	

}
