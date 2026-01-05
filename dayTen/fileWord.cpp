#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fobj("ioThree.cpp");
	string str;
	while (fobj>>str) //word by word
		cout<<str<<" ";	

}
