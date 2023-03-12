#include <iostream>
#include <vector>
using namespace std;

// fix this so it will keep repeating until sum is one digit
void digitalRoot(int num) {
    int digital;
    vector<int> arr;
    while (num > 0) {
        digital = num % 10;
        num /= 10;
        arr.push_back(digital);
    }
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    } cout << sum << endl;
    arr.clear();
    while (sum > 0) {
        digital = sum%10;
        sum /=10;
        arr.push_back(digital);
    }
    sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    } cout << sum;
}

int main() {
    digitalRoot(942);
    return 0;
}