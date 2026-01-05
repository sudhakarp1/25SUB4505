#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("dataTest.txt");

    cout << "Initial position: " << fout.tellp() << endl;

    fout << "Hello";
    cout << "After writing 'Hello': " << fout.tellp() << endl;

    fout << " World";
    cout << "After writing ' World': " << fout.tellp() << endl;

    fout.close();
}

