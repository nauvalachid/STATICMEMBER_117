#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
	static int nim;
	int id;
	string nama;

	void setID();
	void printA11();
	mahasiswa(string pnama) :nama(pnama) { setID(); }
};

int mahasiswa::nim = 0;

void mahasiswa::setID() {
	id = ++nim;
}

void mahasiswa::printA11() {
	cout << "ID   = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}