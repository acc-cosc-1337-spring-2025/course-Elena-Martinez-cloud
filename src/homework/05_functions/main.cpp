
#include <iostream>
#include "func.h"

using std::cout;
using std::cin;


int main() 
{
	int choice;
	string dna;

	while (true){
		cout << "Menu:" <<"\n";
		cout << "1 - Get GC Content" << "\n";
		cout << "3 - Exit" << "\n";

		cout << "Enter your choice (1,2,3): ";
		cin >> choice;

		if (choice == 1){
			cout << "Enter a DNA string: ";
			cin >> dna;
			double gcContent = get_gc_content(dna);
			cout << "GC Content: " << gcContent<<"\n";
		}
		else if (choice == 2){
			cout << "Enter a DNA String: ";
			cin >> dna;
			string complement = get_dna_complement(dna);
			cout << "DNA complement: " << complement <<"\n";
		}
		else if (choice == 3){
			cout << "Exiting the Program"<<"\n";
			break;
		}
		else{
			cout << "ERROR! Please try again."<<"\n";
		}
	}
    
	return 0;
}
