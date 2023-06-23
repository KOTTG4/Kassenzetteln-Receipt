#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{

		int nettopreis;
		int bruttopreis;
		const double mwstsatz = 0.19;

		double nettoStartPreis;
		double mehrwertsteuer;
		double rabatt;
		double total;
		double rabattzwischensumme;

		cout << "Nettopreis :";
		cin >> nettopreis;

		cout << "Rabat :";
		cin >> rabatt;

		nettoStartPreis = nettopreis;
		rabattzwischensumme = nettopreis * (rabatt / 100);
		nettopreis -= rabattzwischensumme;
		mehrwertsteuer = (double)nettopreis * mwstsatz;
		total = nettopreis + mehrwertsteuer;

		cout.setf(ios::fixed);
		cout << setprecision(2);

		cout << "Gaming Pc " << "\t" << total << "€" << endl;

		cout << "----------------------------------------------------------" << endl;
		cout << "MWST%\t\t" << "MWST + \t\t" << "Netto =\t\t" <<"Rabatt \t\t"<< "Brutto" << endl;
		cout << "19% \t\t" << mehrwertsteuer << "€" << "\t\t" << nettopreis << "€" << "\t\t" << rabattzwischensumme << "€" << "\t\t"<< total << "€"  << endl;
		cout << "----------------------------------------------------------" << endl;
		cout << "Zu Zahlen: " << "\t\t\t\t\t" << total << "€" << endl; 
		cout << "----------------------------------------------------------" << endl;


		return 0;

}