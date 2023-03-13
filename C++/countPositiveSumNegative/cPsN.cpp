#include <iostream>
#include <vector>
using namespace std;

vector<int> cPsN(vector<int> nums) {
    int pos = 0, sum = 0;
    vector<int> newNums;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > 0) {
            ++pos;
        } else if (nums[i] < 0) {
            sum += nums[i];
        } else {
            continue;
        }
    }
    newNums.push_back(pos);
    newNums.push_back(sum);
    if (newNums[0] == 0 && newNums[1] == 0) {
        return {};
    }
    return newNums;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};
    vector<int> newNums = cPsN(nums);
    for (int i = 0; i < newNums.size(); i++) {
        cout << newNums[i] << endl;
    }
    return 0;
}