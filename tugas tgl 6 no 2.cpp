#include <iostream>
#include <windows.h>
using namespace std;
struct data
	{
		char nama [20],perusahan[50];
		char nm[20],pr[50];
		
		int jamkerja, gajitotal,awal;
	}gaji;
int main(){
	gaji.awal=500;
	system ("color f6");
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<"----------------------MENGHITUNG JUMLAH GAJI PEGAWAI PERUSAHAAN----------------------\n";
	cout<<"----------------------------------I PUTU MAHARDIKA-----------------------------------\n";
	cout<<"-----------------------------UNIVERSITAS NEGERI SURABAYA-----------------------------\n";
	cout<<"-------------------------------------------------------------------------------------\n";
	cout<<endl;
	cout<<"\t---------------------------------\n";
	cout<<"\t|Nama 				=";
	cin>>gaji.nm;
	cout<<"\t|Perusahan		   	=";
	cin>>gaji.pr;
	cout<<"\t|Jumlah Jam Kerja		=";
	cin>>gaji.jamkerja;
	

if (gaji.jamkerja<=7){
	gaji.gajitotal=gaji.jamkerja*gaji.awal;
	cout<<"\t|Total Gaji Harian Pegawai 	= "<<gaji.gajitotal;}
else if(gaji.jamkerja>7){
	gaji.gajitotal=((gaji.jamkerja-7)*15*gaji.awal)+3500;
	cout<<"\t|Total Gaji Harian Pegawai = "<<gaji.gajitotal;}
	cout<<endl;
	cout<<"\t---------------------------------\n";
	cout<<endl;
}