#include <iostream>
#include <vector>
using namespace std;

// fix this so it will keep repeating until sum is one digit
int digitalRoot(int num) {
    int digital;
    vector<int> arr;
    while (num >= 10) {
        while (num > 0) {
            digital = num % 10;
            arr.push_back(digital);
            num /= 10;
        }
        for (int i = 0; i < arr.size(); i++) {
            num += arr[i];
        }
        arr.clear();
    }
    return num;
}

int main() {
    int num;
    cout << "Enter number to check its digital root: ";
    cin >> num;
    cout << digitalRoot(num) << endl;
    return 0;
}