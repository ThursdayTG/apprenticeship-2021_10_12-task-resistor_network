// inclusion of libraries
#include <iostream>
#include <string>

// inclusion of files
#include "clearscreen.h"

// namespace
using namespace std;

/**/
int main(){

	/*
	 * ## Aufgabe von [REDACTED] (Vertretung) ##
	 * Arbeitsauftrag Widerstandsnetzwerk berechnen
	 *
	 * 	Eingabe:
	 * R1: float
	 * R2: float
	 * Reihe (r), Parallel (p)
	 *
	 * 	Ausgabe:
	 * gesamtwiderstand
	 *
	 * 	Formeln:
	 * Reihenwiderstand		Rg = R1 + R2
	 * Parallelwiderstand	Rg = 1 / (1 / R1 + 1 / R2)
	 */

	/**/
	float	widerstand1 = 0, widerstand2 = 0, gesamtwiderstand = 0;
	char	schaltungsart = 0;
	int		nochmal = 0;
	/**/

	/**/
	cout	<< "Eingabe"
			<< "\n\n";

	lbl1:
	cout	<< "Gib die Werte für den ersten Widerstand R1 und den zweiten Widerstand R2 ein. Nutze ' . ' für Kommazahlen.\n"
			<< "R1:\t";					cin	>> widerstand1;
	cout	<< "R2:\t";					cin	>> widerstand2;

	lbl2:
	cout	<< "\n"
			<< "Gib die Schaltungsart an. Gib 'r' ein für eine Reihenschaltung, gib 'p' ein für eine Parallelschaltung.\n"
			<< "Schaltungsart:\t\t";	cin	>> schaltungsart;
	if	(	schaltungsart	!= 'r'
		&&	schaltungsart	!= 'p'
		&&	schaltungsart	!= 'R'
		&&	schaltungsart	!= 'P'){
		goto lbl2;
	}
	/**/

	/**/
	lbl99:
	if		(schaltungsart == 'r' || schaltungsart == 'R')	{
		gesamtwiderstand = widerstand1 + widerstand2;
	}
	else if	(schaltungsart == 'p' || schaltungsart == 'P')	{
		gesamtwiderstand = 1 / (1/widerstand1 + 1/widerstand2);
	}
	else												{
		cout	<< "Was zum   F I C K   hast du getan?!";

		cin.ignore();
		cin.get();
		goto lbl99;
	}

	cout	<< "Gesamtwiderstand:\t"
			<< gesamtwiderstand;
	/**/

	/**/
	cout	<< "\n\n"
			<< "Noch mal rechnen? (0/1)";	cin >> nochmal;
	if		(nochmal == 1)	goto lbl1;

	cin.ignore();
	cin.get();
	clearscreen();
	return 0;
	/**/

}
/**/

/*
	compile:
g++ widerstandsnetzwerk_alpha.cpp -o rnw_alpha

	run from console:
./rnw_alpha

	clear, compile, run:
clear && g++ widerstandsnetzwerk_alpha.cpp -o rnw_alpha && ./rnw_alpha

	name meaning:
resistance
network
*/
