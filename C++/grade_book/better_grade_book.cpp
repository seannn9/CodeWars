#include <iostream>
using namespace std;

char getGrade(int pre, int mid, int fin) {
    int score = (pre + mid + fin)/3;
    switch(score) {
        case 90 ... 100: return 'A';
        case 80 ... 89: return 'B';
        case 70 ... 79: return 'C';
        case 60 ... 69: return 'D';
        default: return 'F';
    }
}

int main() {
    int pre, mid, fin;
    cout << "Enter grades for prelims, midterms, and finals: ";
    cin >> pre >> mid >> fin;
    cout << "Letter Grade: " << getGrade(pre, mid , fin) << endl;
    return 0;
}