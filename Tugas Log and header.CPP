/*
  Nama       : Royhan Muhammad Sabila
  Kelas      : X PPLG
  Username   : operationxz
  password   : siryessir
*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include "header.h"
main(){
tampilan("header");
int i,a = 0;
char tum,np[20],pw[15] = "siryessir";
cout<<"                           LOGIN                             "<<endl;
login:
cout<<"============================================================="<<endl;
cout<<"   Nama Murid   : ";gets(np);
cout<<"   Password     : ";
 for ( i = 0 ; i <= 9 ; i++)
 { tum = getch();
   cout<<"*";
   if (tum == pw [i])
   {
   a = a + 1;
   }
 }
if ((strcmp(np,"operationxz") == 0) && a == 9)
{
 clrscr();
 cout<<"        "<<np<<" Berhasil Login "<<endl;
}
 else
 {
 clrscr();
 cout<<"                                         "<<endl;
 cout<<"                    ANDA GAGAL LOGIN!!!  "<<endl;
 cout<<"                                         "<<endl;
 goto login;
 a = 0;
 }
 getch();
 }