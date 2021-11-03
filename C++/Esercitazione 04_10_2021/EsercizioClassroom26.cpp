#include <iostream>
using namespace std;

int main() {
	double stipendio, extra, enciclopedie, extra_stipendio, trattenute, stipendio_finale;
	stipendio = (10000);
	extra = (2000);
	cout << "Dimmi quante Enciclopedie hai venduto"<<"\n";
	cin >> enciclopedie;
	extra_stipendio = (extra * enciclopedie + stipendio);
	trattenute = (18 * extra_stipendio / 100);
	stipendio_finale = (extra_stipendio - trattenute);
	cout << "Alla fine il tuo stipendio è di " << "\n";
	cout << stipendio_finale;
	cout << "euro";
}