/*5) Implementare una funzione che dato in ingresso una stringa (array di char) restituisca la stringa inversa*/
#include <iostream>
using namespace std;

char *inverti(char *s){
	int i=0, j=strlen(s)-1;
	char temp;
	while(i<j){
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
		i++;
		j--;
	}
	return s;
}

int main() {
	char s[]="ciao";
	cout << inverti(s) << endl;
	return 0;
}