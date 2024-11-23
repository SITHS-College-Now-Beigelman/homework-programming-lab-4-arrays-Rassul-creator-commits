// Khalizov Rassul
// November 22, 2024
// Lab 9, Part 3

#include <iostream>
#include <string>
using namespace std;

// The function dna_to_rna converts the dna to rna 
string dna_to_rna(const string& dna) {
    string rna = "";  // this will store the string
    
    // Process each character in the DNA string
    for (size_t i = 0; i < dna.length(); ++i) {
        char nucleotide = dna[i];
        
        // Converts the dna letter to the corresponding rna letter when it splits
        if (nucleotide == 'A') {
            rna += 'U';
        } else if (nucleotide == 'C') {
            rna += 'G';
        } else if (nucleotide == 'G') {
            rna += 'C';
        } else if (nucleotide == 'T') {
            rna += 'A';
        }
        // Ignores anything other than those characters because this is an if and else if statements
    }

    return rna;  // Returns the strings after they run through the function
}

int main() {
    string dna;  // this is where the dna sequence is stored 
    
    // User input of the DNA sequence
    cout << "Enter a DNA sequence: ";
    getline(cin, dna);  // Recieves the entire input through getline 

    // Calls the function
    string rna = dna_to_rna(dna);

    // Output the result
    cout << "The RNA sequence is: " << rna << endl;

    /*
    Enter a DNA sequence: A42%
    The RNA sequence is: U
    */

    return 0;
}
