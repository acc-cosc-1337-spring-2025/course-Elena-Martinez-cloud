//add include statements

#include <iostream>
#include <string>
#include "func.h"
using std::string;

//add function code here

double get_gc_content(const string& dna) {
    int gc_count = 0;
    for (char base : dna) {
        if (base == 'G' || base =='C'){
            gc_count++;
        }
    }
    return static_cast<double>(gc_count) / dna.length();
}

string reverse_string(string dna){
    string reversed;
    for (int i = dna.length() - 1; i >= 0; i--){
        reversed += dna[i];
    }
    return reversed;
}

string get_dna_complement(string dna){
    string reversed_dna = reverse_string(dna);

    for (char& base : reversed_dna){
        if (base == 'A'){
            base ='T';
        } else if (base == 'T'){
            base = 'A';
        } else if (base == 'C'){
            base = 'G';
        } else if (base == 'G'){
            base = 'C';
        } else {
            return "Error: Invalid character in DNA sequence";
        }
    }
    return reversed_dna;
}