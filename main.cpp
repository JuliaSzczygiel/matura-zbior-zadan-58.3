#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
int rekord, rekord2, rekord3;
int liczbaRekordow=0;
 ifstream file; 
 ifstream file2;
 ifstream file3;
 ofstream fileOut; 
 char* endptr; 
 long liczba, max, max2, max3, liczbaII, liczbaIII; 
 string liczba1, liczba2, liczba3, liczba4, liczba5, liczba6;
 file.open("dane_systemy1.txt");
 file2.open("dane_systemy2.txt"); 
 file3.open("dane_systemy3.txt");
 fileOut.open("wyjscie.txt");
 bool pierwszy = true;  
 
 if(file.good())  
     while(!file.eof())        
     {
               file>>liczba1 >> liczba2;  
               file2>>liczba3 >> liczba4;
               file3>>liczba5 >> liczba6;
               liczba =  strtol(liczba2.c_str(), &endptr, 4);
               liczba =  strtol(liczba4.c_str(), &endptr, 4);
               liczba =  strtol(liczba6.c_str(), &endptr, 4);
               

               if(pierwszy) 
               {
                            max = liczba;
                            max2 = liczbaII;
                            max3 = liczbaIII;
                            pierwszy = false;
               }
               else 
                    bool rekord = false;
                    if(liczba > max) {
                        max = liczba; 
                        rekord = true;
                       }
                else 
                    bool rekord2 = false;
                    if(liczbaII > max2) {
                        max2 = liczbaII; 
                        rekord2 = true;
                       }
                else
                    bool rekord3 = false;
                    if(liczbaIII > max3) {
                        max3 = liczbaIII; 
                        rekord3 = true;
                       }
                    if (rekord || rekord2 || rekord3) liczbaRekordow++;
     }
 fileOut<< "58.3: " << liczbaRekordow <<endl; 
 file.close();
 file2.close();
 file3.close();
 fileOut.close();
 return 0;
}