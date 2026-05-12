#include<iostream>
using namespace std;

int main() {
    int n = 3; // number of rows
    char ch = 'A';

    for(int i = 1; i <= n; i++) {
        char temp = ch + i - 1; // starting character for the row

        for(int j = 1; j <= i; j++) {
            cout << temp;
            temp--;
        }
        cout << endl;
    }

    return 0;
}
