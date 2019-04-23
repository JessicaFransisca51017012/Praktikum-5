#include <iostream.h>
#include <conio.h>
main(){
int bil;

cout<<"Masukkan Bilangan yang akan dicek = "; cin>>bil;

if (bil > 0)
   cout<<bil<< "Adalah bilangan Positif";
else if (bil<0)
   cout<<bil<<"Adalah bilangan Negatif";
else
   cout<<"Anda menginputkan bilangan nol (0)";
getch();}
