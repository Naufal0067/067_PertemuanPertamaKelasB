#include <iostream>
using namespace std;

int main()
{//begin
	// numeric nPanjang, nLebar, nLuas
	// display 'Masukan Panjang= '
	// accept nPanjang
	// display 'Masukan Lebar = '
	// accept nLebar
	//compute nLuas = npanjang * nLebar
	// display 'Luasnya adalah = ' + nLuas

	int nPanjang, nLebar, nLuas;
	cout << "Masukan Panjang = ";
	cin >> nPanjang;
	cout << "Masukan Lebar = ";
	cin >> nLebar;
	nLuas = nPanjang * nLebar;
	cout << "Luasnya adalah " << nLuas << endl;

	("pause");
}//end
