/* Calcolare la somma dei primi N numeri naturali. */
#include <iostream>
using namespace std;
int main ()
{
  int n;
  cout << "Dammi un numero\n";
  cin >> n;
  
  for (int i = 1; i <= 10; i++)
    {
      int multipli = n * i;
      cout << multipli<<endl;
    }
  return 0;
}
