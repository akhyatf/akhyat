#include <iostream>
#include <string>
using namespace std;

class printer{
	public:
		void mehidupi(string nyala);
		string tinta;
		int harga;
		
	
};

int main () {
	printer Epson;
	
	Epson.tinta ="CMYK";
	Epson.harga = 1250000;
	
	cout<<"Jenis tinta yang dipakai "<< (Epson.tinta)<<endl;
	cout<<"Harga pas nya "<< (Epson.harga)<<endl;
	
	Epson.mehidupi("bekijip mata 3x nyala dah");
}
void printer::mehidupi(string nyala){
	cout<<"Cara mehidupi nya "<<nyala<<" harat lo!!!"<<endl;
}
