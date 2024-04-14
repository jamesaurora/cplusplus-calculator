#include <iostream>
using namespace std;

int main() {
    float angka1, angka2, jumlah;
    char operasi;

    cout << "Masukkan bilangan pertama: ";
    cin >> angka1;

    while (true) {
        cout << "Pilih operasi matematika (+, -, *, /) atau tekan '=' untuk menghitung dan keluar: ";
        cin >> operasi;
        
        if (!cin){
        	exit(0);
		}
		
        else if (operasi != '='){
        cout << "Masukkan bilangan selanjutnya: ";
        cin >> angka2;   
        } else {
        	
        	
        	
        	 switch (operasi) {
            case '+':
                jumlah = angka1 + angka2;
                cout << "Hasil: " << jumlah << endl;
                angka1 = jumlah;
                break;
            case '-':
                jumlah = angka1 - angka2;
                cout << "Hasil: " << jumlah << endl;
                angka1 = jumlah;
                break;
            case '*':
                jumlah = angka1 * angka2;
                cout << "Hasil: " << jumlah << endl;
                angka1 = jumlah;
                break;
            case '/':
                if (angka2 == 0) {
                    cout << "Bilangan kedua tidak boleh dibagi nol!\n";
                } else {
                    jumlah = angka1 / angka2;
                    cout << "Hasil: " << jumlah << endl;
                    angka1 = jumlah;
                }
                break;
            case '=':
                cout << "Hasil akhir: " << jumlah << endl;
                return 0;
            default:
                cout << "Masukkan perintah yang benar!\n";
        	}
        	
		}

       

    }
}

