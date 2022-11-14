//Array 1 Dimensi
/*Programmer : Muhammad Auliya Dimas Prasetiyo
  Nim : 22343060
*/  

#include<iostream>
using namespace std;
int main(){
	int jml_arr;
	int angka[]={5,4,3,2,1};
	jml_arr=sizeof(angka)/sizeof(*angka);
	
	for(int a=0;a<jml_arr;a++){
		cout<<angka[a]<<endl;
	}
}
