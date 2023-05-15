#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printA11();

	static void setNim(int pNim) {
		nim = pNim; /*Definisi Function*/
	}
	static int getNim() {
		return nim; /*Definisi Function*/
	}

	mahasiswa(string pnama) :nama(pnama) {
		setID();
	}
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

int main() {
	mahasiswa mhs1("Sri Dadi");
	mahasiswa mhs2("Budi Jatmiko");
	mahasiswa::setNim(9); //mengakses nim melalui static member function "setNim"
	mahasiswa mhs3("Andi Janu");
	mahasiswa mhs4("Joko Wahono");

	mhs1.printA11();
	mhs2.printA11();
	mhs3.printA11();
	mhs4.printA11();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl; //mengakses nim melalui static member function "getNim"

	return 0;
}