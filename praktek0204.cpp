#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	int LR=42;
	//luas rumah
	double LuasParket = 193*1215;
	// perhitungan luas parket panjang * lebar
	// 193 * 1215 = 234495
	double Box = LuasParket*8/1000000;
	// setelah dapat hasil luas parket, selanjut nya
	// dikalikan 8 keping parket dan dibagi 1000000
	// untuk mendapatkan hasil berkoma 
	double JumlahBox, Parket, Pasang, Total;
	cout<<"Luas Rumah        : "<<LR<<" m2"<<endl;
	cout<<"Luas 1 Box Parket : "<<Box<<" m2"<<endl;
	
	JumlahBox = LR/Box;
	// untuk mencari jumlah box yg di beli, luas rumah dikali dengan hasil luas 1 box parket
	cout<<"Jumlah Box Parket : "<<JumlahBox<<endl;
	
	
	 	
	 
}
