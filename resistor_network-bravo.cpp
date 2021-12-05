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
	 * totalResistance
	 *
	 * 	Formeln:
	 * Reihenwiderstand		Rg = R1 + R2
	 * Parallelwiderstand	Rg = 1 / (1/R1 + 1/R2)
	 */

	/*	variable declaration	*/
	float	resistance01 = 0, resistance02 = 0, totalResistance = 0;
	char	connectionType = '0';
	int		restart = 0;
	/**/

	/*	user input for variables	*/
	do	{	clearscreen();
		cout	<< "Eingabe"
				<< "\n\n";

		cout	<< "Gib die Werte für den ersten Widerstand R1 und den zweiten Widerstand R2 ein. Nutze ' . ' für Kommazahlen.\n"
				<< "R1:\t";					cin	>> resistance01;
		cout	<< "R2:\t";					cin	>> resistance02;

		lbl1:
		cout	<< "\n"
				<< "Gib die Schaltungsart an. Gib 'r' ein für eine Reihenschaltung, gib 'p' ein für eine Parallelschaltung.\n"
				<< "Schaltungsart:\t\t";	cin	>> connectionType;

		/*	checks for connectionType variable and executes assigned equation	*/
		if		(	connectionType == 'r'
				||	connectionType == 'R')							{
			totalResistance = resistance01 + resistance02;
		}
		else if	(	connectionType == 'p'
				||	connectionType == 'P')							{
			totalResistance = 1 / (1/resistance01 + 1/resistance02);
		}
		else														{
			cout	<< "\n\t Was zum   F I C K   hast du getan?!";
			cin.ignore();
			cin.get();
		}
		/**/

	}	while	(	connectionType	!= 'r'
				&&	connectionType	!= 'p'
				&&	connectionType	!= 'R'
				&&	connectionType	!= 'P'
				&&	connectionType	!= '0');	// &&	connectionType	!= '0' breaks the loop if connectionType == 0, letting the program finish in case of an error

	cout	<< "Gesamtwiderstand:\t"
			<< totalResistance;
	/**/

	/*	asking to restart	*/
	cout	<< "\n\n"
			<< "Noch mal rechnen? (0/1)";	cin >> restart;
	if		(restart == 1)	goto lbl1;

	cin.ignore();
	cin.get();
	clearscreen();
	return 0;
	/**/

}
/**/

/*
	compile:
g++ widerstandsnetzwerk_bravo.cpp -o rnw_bravo

	run from console:
./rnw_bravo

	clear, compile, run:
clear && g++ widerstandsnetzwerk_bravo.cpp -o rnw_bravo && ./rnw_bravo

	name meaning:
resistance
network
*/
