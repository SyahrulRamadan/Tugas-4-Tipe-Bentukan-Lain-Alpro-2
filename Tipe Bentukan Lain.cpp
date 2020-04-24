#include <iostream>

int main()
{

     typedef unsigned int udb;

     udb i = 5 , j = 2;

     cout << " Nilai i = " << i;

      cout << "Nilai j = " << j;

      return 0;

}

Pada struct, typedef bisa digunakan dengan notasi sebagai berikut :

typedef struct structure_name
{
    data-type member-1;
    data-type member-2;
    data-type member-3;
    data-type member-4;
}type_name;


ketika dalam fungsi main. type_nama bisa digunakan pada program.


#include<iostream>
using namespace std;

struct dataMahasiswa
{
    string nama[3];
    int angkatan;
    int baris[2][3];
};

int main()
{
    dataMahasiswa maba;
    for (int i = 0 ; i < 3 ; i ++)
    {
        cout << "Nama : ";
        cin >> maba.nama[i];
        cout << "Angkatan : ";
        cin >> maba.angkatan;
        
    }
    cout << endl;
    for (int j = 0 ; j < 3 ; j++)
    {
        
        cout<< maba.nama[j] <<" Berada di baris ke-" << (j+1) <<endl;
             
    }
}

#include <iostream>
using namespace std;

struct mahasiswa
{
	char nama[30];
	int kelas;
};

void dataMahasiswa(mahasiswa); //Deklarasi 
void naik_turun(int &penaikan, int &penurunan, int nilai, int jumlah);//function prototype
 
int main(){
    int hasilNaik=0, hasilTurun=0, nilai=10;
    mahasiswa m;

    cout << "Nama : ";
     cin >> m.nama;
	cout <<"Kelas : ";
 	cin >> m.kelas;
	dataMahasiswa(m);
 
    naik_turun(hasilNaik, hasilTurun, nilai, 3);
    cout<<"hasilNaik = "<<hasilNaik<<endl;
    cout<<"hasilTurun = "<<hasilTurun<<endl;
 
    return 0;
}

void naik_turun(int &penaikan, int &penurunan, int nilai, int jumlah){
    penaikan = nilai + jumlah;
    penurunan = nilai - jumlah;

void dataMahasiswa(mahasiswa m)

{	
	cout << "Nama: " <<m.nama;
        cout << "Kelas: " <<m.kelas;
}


#include<iostream>
using namespace std;

int main()
{
    enum hari{SENIN,SELASA,RABU,KAMIS,JUMAT,SABTU,MINGGU};
    enum hari sekarang;
    sekarang = SELASA;
    cout << "Hari selasa adalah hari ke- " << sekarang+1;
}


using namespace std;

struct Jarak
{
    int meter;
    float kilometer;
};

int main()
{
    Jarak *ptr, d;

    ptr = &d;
    
    cout << "Meter: ";
    cin >> (*ptr).meter;
    cout << "Kilometer: ";
    cin >> (*ptr).kilometer;
 
    cout << "OUTPUT" << endl;
    cout << "Jaral = " << (*ptr).meter << " meter " << (*ptr).kilometer << " kilometer";

    return 0;
}

#include <iostream>

using namespace std;



union MyUnion
{
      int x;
      int y;
};

int main()
{
      //memberi nilai 10 pada variabel x
      MyUnion data;
      data.x  = 10;

      cout<<"Nilai varibel dengan Union "<<endl;
      cout<<"-------------------------- "<<endl;
      cout<<"Nilai x = "<<data.x<<endl;
      cout<<"Nilai y = "<<data.y<<endl;
      //y bernilai sama dengan x

      
}
