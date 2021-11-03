#include <iostream>
using namespace std;

int main(){
    int lato1, lato2, lato3;
	    cout<<"Dammi le misure dei tre lati"<<endl;
	    cin>>lato1;
	    cin>>lato2;
	    cin>>lato3;
	    if (lato1 == lato2 or lato1 == lato3 or lato2 == lato3){
	        cout<<"Il tuo triangolo è un triangolo isoscele";
	        }
	        else if (lato1 == lato2 && lato1 == lato3){
	            cout<<"Il tuo triangolo è un triangolo equilatero";
	        }
	        else if (lato1 != lato2 && lato1 != lato3){
	            cout<<"Il tuo triangolo è un triangolo scaleno"<<endl;
	        }
    return 0;
}