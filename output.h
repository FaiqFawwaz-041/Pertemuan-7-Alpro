#include "../base.h"

void BaseProject::output(){
  int nim;
  cout<<"Masukkan NIM Data Mahasiswa yang ingin dicari : \n";
  cin>>nim;
  for(int i = 0; i<=10; i++){
    if(mhs[i].nim==nim){
        cout<<"Data NIM yang anda cari adalah : \n"<<mhs[i].nim<<"\t\t"<<mhs[i].nama;
    }
  }

}
