#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a,b,p,ar,d;
    int scelta;
    cout << "inserisci la misura della base del rettangolo:";
    cin >> a;
    cout << "inserisci la misura dell'altezza del rettangolo:";
    cin >> b;
    cout << "\n\n";
    cout <<"[1]perimetro   [2]area   [3]diagonale\n\n";
    cout << "cosa vuoi calcolare?";
    cin >> scelta;
    if (scelta==1){
        p=2*(a+b);
        cout << "\nil perimetro del rettangolo e\':" << p;
    }
    else if (scelta==2){
        ar=a*b;
        cout <<"\nl'area del triangolo e\':" << ar;
    }
    else if (scelta==3){
        d=sqrt(a*a+b*b);
        cout << "\nla misura della diagonale e\':" << d;
    }
    else if (scelta!=1,scelta!=2,scelta!=3)
    {
        cout << "\nerrore!!!devi scegliere un numero tra 1 e 3!";
    }

}
