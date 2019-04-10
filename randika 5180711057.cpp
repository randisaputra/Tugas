#include <iostream>
using namespace::std;

void grade (double total){
char huruf;
if(total >=81)
    huruf ='A';
else if(total >=61)
    huruf ='B';
else if(total >=41)
    huruf ='C';
else if(total >=21)
    huruf ='D';
else if(total >=0)
    huruf ='E';
cout<<"nilai total :"<<huruf<<endl;
}
main(){
double uts,uas,tugas,absen,total;
char huruf;
cout<<"Mencari Nilai Total";
cout<<"\nMasukkan Nilai UTS\t:";cin>>uts;
cout<<"Masukkan Nilai UAS\t:";cin>>uas;
cout<<"Masukkan Nilai Tugas\t:";cin>>tugas;
cout<<"Masukkan Nilai Absen\t:";cin>>absen;
total = (uts*0.2)+(uas*0.3)+(tugas*0.35)+(absen*0.15);
cout<<"Nilai Total :"<<total<<endl;
grade (total);
}
