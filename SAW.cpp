#include <iostream>
#include <cmath>
using namespace std;

int main(){
	// DEKLARASI VARIABEL BERDASARKAN ARRAY
	int i,j,n,b,a[8];
	double c[i][j], ac[3][5] = {{4,4,5,3,3},{3,3,4,2,3},{5,4,2,2,2}};
	double w[] = {5,3,4,4,2};
	double hasil1,hasil2,hasil3,hasilkali,mc1,mc2,mc3,mc4,mc5,h1,h2,h3,h4,h5,h6;
	// SETTING PRESISI DESIMAL
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);

	// ISI DATA YANG MANUAL PENCARIAN NILAI MAX
		mc1=max(4,max(3,5));
		mc2=max(4,max(3,4));
		mc3=max(5,max(4,2));
		mc4=max(3,max(2,2));
		mc5=max(3,max(3,2));
		
	// PERHITUNGAN MANUAL
	

		
	// MENAMPILKAN NILAI
	cout << "MATRIKS X :"<<endl;
	for(i=0;i<3;i++){
		for (j=0;j<5;j++) {
			cout<<ac[i][j]<<" | ";
		}
		cout<<endl;
	}
	cout << "MATRIKS R :"<<endl;

	cout << "BOBOT W :"<<endl;

	cout << "MATRIKS R * W :"<<endl;

	cout << "HASIL AKHIR  :"<<endl;

}
