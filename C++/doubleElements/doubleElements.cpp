#include <iostream>
#include <vector>
using namespace std;

vector<int> doubleEl(vector<int> arr) {
    vector<int> newArr;
    for (int i = 0; i < arr.size(); i++) {
        arr[i] *= 2;
        newArr.push_back(arr[i]);
    }
    return newArr;
}

int main() {
    vector<int> arr = {4, 8, 12};
    vector<int> newArr = doubleEl(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << newArr[i] << endl;
    }
    return 0;
}