#include <iostream.h>
#include <conio.h>
void main(){
char kode;
char *hari;
clrscr();
cout<<"       Input Kode Hari        \n";
cout<<"Input kode Hari : ";cin>>kode;
clrscr();
if ((kode=='a')|| (kode == 'A')){
   hari = "senin";
   }
else if((kode=='b')|| (kode == 'B')){
   hari = "selasa";
   }
else if((kode=='c')|| (kode == 'C')){
   hari = "rabu";
   }
else if((kode=='c')|| (kode == 'D')){
   hari = "kamis";
   }
else if((kode=='e')|| (kode == 'E')){
   hari = "jumat";
   }
else if((kode=='f')|| (kode == 'F')){
   hari = "sabtu";
   }
else{
   cout<<"Tidak ada hari yang sesuai";
}
cout<<"         Tampilan Hari Pilihan Anda        \n";
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
cout<<"Kode Hari  : "<<kode<<"\n";
cout<<"Nama Hari  : "<<hari<<"\n";
cout<<"~~~~~~~~~~~~~ TERIMA KASIH ~~~~~~~~~~~~~~~";
getch();
}