/*1) Inserendo il proprio giorno e mese di nascita, comunica il segno zodiacale corrispondente alla data inserita*/
#include <iostream>
using namespace std;

string zodiacSign(int day, int month) {
	string sign;
	switch(month) {
	case 1:
		if (day <= 20) {
			sign = "Capricorno";
			return sign;
		}
		else {
			sign = "Acquario";
			return sign;
		}
		break;
	case 2:
		if (day <= 19) {
			sign = "Acquario";
			return sign;
		}
		else {
			sign = "Pesci";
			return sign;
		}
		break;
	case 3:
		if (day <= 20) {
			sign = "Pesci";
			return sign;
		}
		else {
			sign = "Ariete";
			return sign;
		}
		break;
	case 4:
		if (day <= 20) {
			sign = "Ariete";
			return sign;
		}
		else {
			sign = "Toro";
			return sign;
		}
		break;
	case 5:
		if (day <= 21) {
			sign = "Toro";
			return sign;
		}
		else {
			sign = "Gemelli";
			return sign;
		}
		break;
	case 6:
		if (day <= 21) {
			sign = "Gemelli";
			return sign;
		}
		else {
			sign = "Cancro";
			return sign;
		}
		break;
	case 7:
		if (day <= 22) {
			sign = "Cancro";
			return sign;
		}
		else {
			sign = "Leone";
			return sign;
		}
		break;
	case 8:
		if (day <= 22) {
			sign = "Leone";
			return sign;
		}
		else {
			sign = "Vergine";
			return sign;
		}
		break;
	case 9:
		if (day <= 23) {
			sign = "Vergine";
			return sign;
		}
		else {
			sign = "Bilancia";
			return sign;
		}
		break;
	case 10:
		if (day <= 23) {
			sign = "Bilancia";
			return sign;
		}
		else {
			sign = "Scorpione";
			return sign;
		}
		break;
	case 11:
		if (day <= 22) {
			sign = "Scorpione";
			return sign;
		}
		else {
			sign = "Sagittario";
			return sign;
		}
		break;
	case 12:
		if (day <= 21) {
			sign = "Sagittario";
			return sign;
		}
		else {
			sign = "Capricorno";
			return sign;
		}
		break;
	default:
		sign = "Data Non Valida!!";
		break;
		
	}
}

int main() {
	int month, day;
	string zodiac_Sign;
	cout << "Inserisci il tuo mese di nascita: ";
	cin >> month;
	cout << "Inserisci il tuo giorno di nascita: ";
	cin >> day;
	
	zodiac_Sign = zodiacSign(day, month);
	
	cout << "Il tuo segno zodiacale e': " << zodiac_Sign << endl;
	
}