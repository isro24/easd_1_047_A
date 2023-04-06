// 1. Jelaskan mengapa suatu algoritma dibutuhkan untuk menyelesaikan suatu masalah
// 2. Dalam algortima diklasifikasikan menjadi 2 data struktur. Sebutkan 2 data struktur tersebut
// 3. Untuk mengukur sebuah efisiensi waktu suatu algoritma dibutuhkan beberapa faktor. Sebutkan faktor-faktor yang mempengaruhi efisiensi waktu eksekusi suatu program
// 4. Dari 6 algortima yang sudah dipelajari. Algoritma mana yang paling mudah dipahami dan diemplementasikan untuk mengurutkan data yang ukurannya besar. Jelaskan anda memilih itu
// 5. Sebutkan dari algoritma yang sudah dipelajari mana yanng termasuk dalam Quadratic dan mana yang termasuk kedalam Loglinier
// 6. Buatlah sebuah program yang mengimplementasikan Merge sort menggunakan bahasa c++. Berikut merupakan Algoritma Merge sort

#include <iostream>
using namespace std;

int Isro[77];
int cmp_count;
int cmp_mov;
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang elemen array: ";
		cin >> n;

		if (n <= 77)
			break;
		else
			cout << "\nMaksium panjang array adalah 77" << endl;
	}

	cout << "\n--------------" << endl;
	cout << "\nMasukkan elemen Array" << endl;
	cout << "\n--------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> Isro[i];
	}

	void MergeSort(int low, int high)
	{
		int mid i, IU;
		if (low >= high);
		return;

		mid = (low + high) / 2;

		i = low;
		IU = mid + 1;
		k = low;

	}
	while ((Isro[i] <= mid) && (i <= high))
	{
		i++;												
		cmp_count++;
	}
	cmp_count++;

		}
	while e((arr[j] > pivot) && (j >= low))
{
	j--;												
	cmp_count++;
}
cmp_count++;

	






