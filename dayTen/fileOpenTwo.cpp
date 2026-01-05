#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream fobj("fileOut.txt", ios::app);
	fobj<<"Sending data into the file"<<endl;
}
