#include <iostream>
#include <windows.h>

using namespace std;


    struct data
    {
    	char nama[20];
        int tugas;
        int kuis;
        int mid;
        int uas;
        float nilaiakhir;
    }mahasiswa;
int main(){
	system ("color f6");
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"----------------------MENGHITUNG JUMLAH NILAI AKHIR MAHASISWA------------------------\n";
	cout<<"----------------------------------I PUTU MAHARDIKA-----------------------------------\n";
	cout<<"-----------------------------UNIVERSITAS NEGERI SURABAYA-----------------------------\n";
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<endl;
char nilaihuruf;

	cout<<"nama 			    	 : ";
	cin>>mahasiswa.nama;
    cout<<"Masukan Nilai Tugas  		 : ";
    cin>>mahasiswa.tugas;
    cout<<"Masukan Nilai Kuis   		 : ";
    cin>>mahasiswa.kuis;
    cout<<"Masukan Nilai UTS 	  	 : ";
    cin>>mahasiswa.mid;
    cout<<"Masukan Nilai UAS  		 : ";
    cin>>mahasiswa.uas;
    cout<<endl;



	mahasiswa.nilaiakhir=0.1*mahasiswa.tugas+0.2*mahasiswa.kuis+0.3*mahasiswa.mid+0.4*mahasiswa.uas;
	
	
if (mahasiswa.nilaiakhir>=85)
    nilaihuruf='A';
else if (mahasiswa.nilaiakhir>=70)
    nilaihuruf='B';
else if (mahasiswa.nilaiakhir>=55)
    nilaihuruf='C';
else if (mahasiswa.nilaiakhir>=40)
    nilaihuruf='D';
else if (mahasiswa.nilaiakhir<40)
    nilaihuruf='E';

cout<< "\tKETERANGAN";
cout<< "\nNilai akhir >85 \t: A\n";
cout<< "85 >= nilai akhir > 70 \t: B\n";
cout<< "70 >= nilai akhir > 55 \t: C\n";
cout<< "55 >= nilai akhir > 40 \t: D\n";
cout<< "Nilai akhir <=40 \t: E\n";

cout<<"\nNilai Total Akhir : "<<mahasiswa.nilaiakhir<<" = "<<nilaihuruf;cout<<endl;
cout<<endl;

}