#include <iostream>
using namespace std;

// Prosedur 1: Reverse String Menggunakan Iterasi
void reverseIterative(string str) {
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

// Prosedur 2: Reverse String Menggunakan Rekursi
void reverseRecursive(string str, int index) {
    if (index < 0) return; // Basis Rekursi
    cout << str[index];
    reverseRecursive(str, index - 1);
}

int main() {
    string input;
    cout << "Masukkan string: ";
    cin >> input;

    cout << "Hasil Reverse (Iterasi): ";
    reverseIterative(input);

    cout << "Hasil Reverse (Rekursi): ";
    reverseRecursive(input, input.length() - 1);
    cout << endl;

    return 0;
}
