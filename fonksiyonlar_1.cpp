#include<iostream>
using namespace std;

void topla(int a, int b) {
	cout << "toplam:" << a + b << endl;
}

void ekranaMerhabaYazdır() {
	cout << "merhaba" << endl;
}



int toplama(int c, int d) {
	
	return c+d ;
}

/*fonksiyonlarda 2 şekilde kullanabiliriz 1.si void olarak 2.si returnlü olarak*/
int main() {

	topla(5,7);

ekranaMerhabaYazdır();

 int toplamsonuc = toplama ( 1 , 2 );
 cout << toplamsonuc<<endl;
}
