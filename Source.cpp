/*

	PROGRAM UNTUK MENGHITUNG NILAI FAKTORIAL DARI SUATU BILANGAN
	Written by : Izzu Zantya Fawwas

*/
#include <iostream>

using namespace std;

int fibonacci(int n, int pilih) {
	int i;
	int angka[3];

	switch (pilih)
	{
	case 1:
		if (n >= 0) {
			for (int i = 0; i < n; i++)
			{
				if (i == 0)
				{
					angka[0] = 1;
					cout << angka[0] << " ";
				}
				else if (i == 1)
				{
					angka[1] = angka[0];
					cout << angka[1] << " ";
				}
				else {
					angka[2] = angka[1] + angka[0];
					cout << angka[2] << " ";
					angka[0] = angka[1];
					angka[1] = angka[2];
				}
			}
		}
		else {
			cout << endl << "Error..." << endl;
		}

		break;

	case 2:
		i = 0;
		angka[2] = 0;
		while (true) {
			if (i == 0)
			{
				angka[0] = 1;
				cout << angka[0] << " ";
			}
			else if (i == 1)
			{
				angka[1] = angka[0];
				cout << angka[1] << " ";
			}
			else {
				angka[2] = angka[1] + angka[0];
				if (angka[2] > n)
				{
					break;
				}
				cout << angka[2] << " ";
				angka[0] = angka[1];
				angka[1] = angka[2];
			}
			i++;
		}
		break;
	default:
		break;
	}

	return 0;
}

int main() {
	cout << "//////////////////////////////////////////////////////\n\nPROGRAM UNTUK MENAMPILKAN DERET FIBONACCI\nWritten by : Izzu Zantya Fawwas\n\n//////////////////////////////////////////////////////\n\n";

	int n, pilih;

	cout << "Input berdasarkan :\n1. Jumlah bilangan yang ingin ditampilkan\n2. Bilangan maksimal" << endl << endl;
	cout << "Masukkan pilihan : ";
	cin >> pilih;

	switch (pilih)
	{
	case 1:
		cout << endl << "Masukkan jumlah bilangan Fibonacci yang ingin ditampilkan : ";
		cin >> n;
		fibonacci(n, pilih);
		cout << endl;
		break;
	case 2:
		cout << endl << "Masukkan bilangan maksimal anda : ";
		cin >> n;
		fibonacci(n, pilih);
		cout << endl;
		break;
	default:
		cout << endl << "Error..." << endl;
		break;
	}

	return 0;
}