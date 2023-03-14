#include <iostream>
#include <vector>
#include<cmath>
using namespace std;

bool narcissistic(int num) {
    vector<int> arr;
    int root, sum = 0, count = 0, orig = num;
    while (num > 0) {
        root = num%10;
        arr.push_back(root);
        num/=10;
        count++;
    }
    for (int i = 0; i < arr.size(); i++) {
        sum += pow(arr[i], count);
    }
    if (sum == orig) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << narcissistic(7);
    return 0;
}