#include <iostream>
using namespace std;

struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa
{
	char NIM[12];
	char nama[25];
	AlamatDetail alamat;
	int umur;
};


int main () {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukan NIM :";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukan Nama :";
		cin.getline(mhs[i].nama, 25);
		cout << "masukan Alamat :";
		cout << "\n\tMasukan Desa :";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tMasukan Kota :";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "Masukan Umur : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM = " << mhs[i].NIM;
		cout << "\nNama = " << mhs[i].nama;
		cout << "\nKota = " << mhs[i].alamat.desa;
		cout << "\nUmur = " << mhs[i].alamat.kota;
		cout << "\nUmur = " << mhs[i].umur;
	}
