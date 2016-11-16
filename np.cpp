#include<iostream>

using namespace std;

int main()
{
   int n, i = 3, count, c;

   cout << "INSERISCI IL NUMERO DEI PRIMI NUMERI RICHIESTI:";
   cin >> n;
   cout << "\n";

   if ( n >= 1 )
   {
      cout <<"IL PRIMI" << n << " NUMERI PRIMI SONO:\n";
      cout <<"2";
   }

   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         cout << "\n"<< i;
         count++;
      }
      i++;
   }

   return 0;
}
