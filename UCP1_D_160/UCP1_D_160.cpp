//Soal Type 1

// 1.
//Insertion Sort adalah proses mengurutkan data data seperti memegang kartu kartu dan mengurutkannya bisa dri yang terkecil atau yang terbesar

// 2.
//Selection Sort adalah proses mengurutkan data dengan mencari nilai terkecil ataupun terbesar dan kemudian menempatkannya ke tempat yang seharusnya

// 3.
//kita lihat terlebih dahulu ada berapa banyak data yang kita punya, contoh kita mempunyai 6 data yang tidak urut maka kita juga akan melakukan langkah langkah pengurutan sebanyak 6x juga

// 4.

#include <iostream>
using namespace std;

int abi[160];
int n;

void input() {
    while (true)
    {
        cout << "Masukan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 160) {
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 160 elemen. \n";
        }
    }
    cout << endl;
    cout << "====================";
    cout << "Masukan Elemen Array";
    cout << "====================";

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-n" << (i + 1) << ": ";
        cin >> abi[i];
    }
}

void selectionsortArray() {

    int min_index;
    int i, j;                                        

    for (i = 0; i <= n - 2; i++) {

        min_index = abi[j];

        j = i - 1;                           

        while (j >= 0 && arr[j] > temp)           
         
        {
            arr[j + 1] = arr[j];                
            j--;                            
        }

        arr[j + 1] = temp; 

        cout << "\nPass" << i << ": ";      
        for (int k = 0; k < n; k++) {       
            cout << arr[k] << " ";        
        }

    } 
}

void display() {                          
    cout << endl;                         
    cout << "===============================" << endl;
    cout << "Elemen Array yang Telay Disusun" << endl;
    cout << "===============================" << endl;

    for (int j = 0; j < n; j++) {       
        cout << arr[j] << endl;            
    }
    cout << endl;                         
}




int main() 
{
    input();                 
    selectionsortArray();
    display();
}