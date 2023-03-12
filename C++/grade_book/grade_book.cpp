#include <iostream>
using namespace std;

char getGrade(int pre, int mid, int fin) {
    char letterGrade;
    float score = (pre + mid + fin)/3;
    if (score >= 90 && score <= 100) {
        letterGrade = 'A';
    } else if (score >= 80 && score < 90) {
        letterGrade = 'B';
    } else if (score >= 70 && score < 80) {
        letterGrade = 'C';
    } else if (score >= 60 && score < 70) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }
    return letterGrade;
}

int main() {
    int pre, mid, fin;
    cout << "Enter grades for prelims, midterms, and finals: ";
    cin >> pre >> mid >> fin;
    cout << "Letter Grade: " << getGrade(pre, mid , fin) << endl;
    return 0;
}