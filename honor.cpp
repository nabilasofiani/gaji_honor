#include <iostream>

using namespace std;

int main () {
	

	string nama;;
	double honor_tetap;
	char gol_jabatan;
	float tun_jabatan;
	char gol_pendidikan;
	float tun_pendidikan;
	int jam_lembur;
	float honor_lmbr;
	int jam_kerja;
	float total_honor;
	
	cout << "\n################################################\n"<<endl;
	cout << "     PROGRAM HITUNG HONOR KARYAWAN KONTRAK         "<<endl;
	cout << "Nama karyawan \t\t	: ";getline(cin, nama);
	cout << "Golongan Jabatan(A/B/C)		: ";cin >>gol_jabatan;
	cout << "Pendidikan (SMU(1)/D3(2)/S1(3))	: ";cin >> gol_pendidikan;
	cout << "Jumlah jam kerja		: ";cin >> jam_kerja;
	cout << "\n################################################\n"<<endl;
	
	honor_tetap = 700000;
	
	
	switch (gol_jabatan) {
		case 'A' :
			tun_jabatan = 0.05 * honor_tetap;
			break;
		case 'B' :
			tun_jabatan = 0.1 * honor_tetap;
			break;
		case 'C' :
			tun_jabatan = 0.15 * honor_tetap;
			break;	
		default :
			cout<<"Golongan Tidak Tersedia"<<endl;
			tun_jabatan =0;
					
	}
	
	switch (gol_pendidikan) {
		case '1' :
			tun_pendidikan = honor_tetap * 0.025;
			break;
		case '2' :
			tun_pendidikan = honor_tetap * 0.05;
			break;
		case '3' :
			tun_pendidikan = honor_tetap * 0.075;
			break;
		default :
			cout<< "golongan tidak tersedia"<<endl;
			tun_pendidikan =0;
					
	}
	
	if ((jam_kerja - 8) > 0)
	{
	
		jam_lembur = (jam_kerja - 8);
	}
	
	honor_lmbr = (5000*jam_lembur);
	
	total_honor = honor_tetap + tun_jabatan + tun_pendidikan + honor_lmbr;
	
	cout<< "Karyawan yang bernama "<<nama<<endl;
	cout << "Honor diterima\n"<<endl;
	cout << "Honor tetap			: Rp"<<honor_tetap<<endl;
	cout << "Tunjangan jabatan		: Rp"<< tun_jabatan<<endl;
	cout << "Tunjangan pendidikan		: Rp"<<tun_pendidikan<<endl;
	cout << "Honor lembur			: Rp"<<honor_lmbr<<endl;
	
	cout << "Honor yang diterima		: Rp"<<total_honor<<endl;
}