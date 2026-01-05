#include <iostream>
#include <fstream>
using namespace std;

int main(){
	char fileName[] = "ioThree.txt";
	ifstream fobj(fileName);
	string str;
	if (!fobj){
		cout<<fileName<<" file NOT FOUND"<<endl;
		return 1;
	}

	while (getline(fobj,str)) //word by word
		cout<<str<<endl;	

}
