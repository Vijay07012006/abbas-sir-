//WAP to print a full pyramid of stars.
#include<iostream>
using namespace std;

int main() {
    int i, j, col;
    for(i = 1; i <= 5; i++) {
        // Spaces
        for(j = 1; j <= (5 - i); j++) {
            cout << " ";
        }
        // Stars
        for(col = 1; col <= (2 * i - 1); col++) {
            cout << "*";
           
        }
        cout << endl; // Next line
    }
    return 0;
}
