//Nia Novela Ariandini ( 2311102057 )
#include <iostream>
using namespace std;

int main()
{
   string kalimat057;
   int count=0;
   cout << "==============================" << endl;
   cout << "PROGRAM MENENTUKAN HURUF VOKAL" << endl;
   cout << "==============================" << endl;
   cout << "Masukan Kalimat yang anda inginkan : "   ;
   cin  >> kalimat057;

   for (int i=0; i<kalimat057.length(); i++)
   {
       if(kalimat057[i]=='a'|| kalimat057[i]=='i'|| kalimat057[i]=='u'|| kalimat057[i]=='e'|| kalimat057[i]=='o')
       {
             count++;
       }
   }
   cout << "Jumlah huruf vokal pada kalimat tersebut adalah : " << count;

}