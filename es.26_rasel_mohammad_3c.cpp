#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{
    char start;
    do{
    unsigned n;//n deve essere positivo,per cui lo dichiaro senza segno
    unsigned div = 2;
    unsigned r;
    cout <<"\t\t\tLA VERIFICA DI UN NUMERO PRIMO\n\n";
    cout <<"--------------------------------------------------------------------------------\n";
    cout << "INSERISCI IL NUMERO DA CUI VOI DETERMINARE SE E' PRIMO:";
    cin >> n;
    cout << "\n";
    bool primo = true;
    while (div < n) {
        unsigned r = n % div;

        if (r == 0) {
            primo = false;
        }
        div=div+1;
    }

    if (primo) {
        cout << "IL NUMERO " << n << " E' PRIMO.\n\n";
        cout <<"--------------------------------------------------------------------------------\n";
    } else {
        cout << "IL NUMERO " << n << " NON E' PRIMO.\n\n";
        cout <<"--------------------------------------------------------------------------------\n";
    }
    cout << "PREMI [R]----->CHIUDI\n\nPREMI UNA QUALSIASI ALTRA LETTERA----->RIAVVIA\n\n";
    cin >> start;
    system("CLS");
    }while(start!='r');

}
