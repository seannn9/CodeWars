#include <iostream>
#include <vector>

int findOutlier(const std::vector<int>& arr) {
    int even = 0, odd = 0, currOdd, currEven;
    for (int i : arr) {
        if (i % 2 == 0) {
            even++;
            currEven = i;
        } else {
            odd++;
            currOdd = i;
        }
    }
    if (even > odd){
        return currOdd;
    } else {
        return currEven;
    }
}

int main() {
    std::cout << findOutlier({160, 3, 1719, 19, 11, 13, -21});
    return 0;
}
