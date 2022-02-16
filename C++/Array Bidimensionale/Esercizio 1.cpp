/*

Realizzare un programma in c++ che permetta di registrare in una tabella bidimensionale i nomi e i cognomi dei clienti di un'azienda (6 clienti); 

*/

#include <iostream>
using namespace std;

int main ()
{

  string clienti[6][2];
  for (int i = 0; i < 6; i++)
    {
      cout << i + 1 << ") Inserisci il cognome del cliente: ";
      cin >> clienti[i][0];
      cout << i + 1 << ") Inserisci il nome del cliente: ";
      cin >> clienti[i][1];

      system ("clear");
    }

  return 0;



}
