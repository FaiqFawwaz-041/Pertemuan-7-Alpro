#include "../base.h"

void BaseProject::proses(){
  int i = 0;
  int j = 1;
  int data;
  for(int a = 0; a<= 10; a++){
    while(mhs[i].nim!=0){
      if(mhs[j].nim>mhs[i].nim){
        j=i;
      }
      i++; 
    }
    urut[a].nim=mhs[j].nim;
    urut[a].nama=mhs[j].nama;
    i=10-a;
  }

    for(int i = 0; i <= 10; i++){
    cout<<i<<" "<<urut[i].nim<<"\t"<<urut[i].nama;
  }
  
  
}