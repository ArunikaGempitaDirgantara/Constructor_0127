#include <iostream>
using namespace std;

class Mahasiswa
{
private:
	static int nim;
public:
	int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(int pNim) { nim = pNim; }
	static int getNim() { return nim; }

	Mahasiswa(string pnama)
	{
		nama = (pnama);
		setID();
	}
};

int Mahasiswa::nim = 0;
void Mahasiswa::setID()
{
	id = ++nim;
}

void Mahasiswa::printAll()
{
	cout << "ID =" << id << endl;
	cout << "Nama =" << nama << endl;
	cout << endl;
}

int main()
{
	Mahasiswa mhs1("Iqbal");
	Mahasiswa mhs2("Syabana");
	Mahasiswa::setNim(9); //mengakses nim melalui static member function "setNim"
	Mahasiswa mhs3("Azmi");
	Mahasiswa mhs4("People");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
}
