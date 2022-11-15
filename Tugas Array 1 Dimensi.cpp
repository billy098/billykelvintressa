#include <iostream>

using namespace std;

int main(){
 int arrayDimensi1[5];
 
 for(int i=0;i<5;i++){
  cout<<"Masukkan Nilai Siswa Urutan Ke-"<<i+1<<" : ";
  cin>>arrayDimensi1[i];
 }
 
 cout<<endl;
 
 for(int x=0;x<5;x++){
  cout<<"Nilai Siswa Urutan Ke-"<<x+1<<" : "                          <<arrayDimensi1[x]<<endl;
 }
}
