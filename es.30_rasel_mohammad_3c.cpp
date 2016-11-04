#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
   char start1;
    do{
        int n,c,d,u;
    start:
    cout << "IMMETTI UN NUMERO INFERIORE A 1000:";
    cin >> n;
    cout << "\n";
    if(n<1000){
       u=n;
       u=u%10;
       d=n;
       d=d/10;
       d=d%10;
       c=n;
       c=c/100;
       c=c%10;
       cout<<"CENTINAIA:"<<c<<"\tDECINE:"<<d<<"\tUNITA':"<<u<<"\n\n";
       cout<<"--------------------------------------------------------------------------------\n";

    }else
    {
        cout << "ERRORE!DEVI IMMETTERE UN NUMERO INFERIORE A 1000\n\n";
        system("PAUSE");
        system("cls");
        goto start;
    }
    cout << "PREMI [R]----->CHIUDI\n\nPREMI UNA QUALSIASI ALTRA LETTERA----->RIAVVIA\n\n";
    cin >> start1;
    system("cls");
    }while(start1!='r');
}
