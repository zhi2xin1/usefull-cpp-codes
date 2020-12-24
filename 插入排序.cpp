#include <iostream>

void insertSort(int unsort[], int n) {
    for (int i = 1; i < n; ++i) {
        int temp = unsort[i];
        int k = i;
        //边移位边对比大小
        while (k != 0 && unsort[k - 1] > temp) {
            unsort[k] = unsort[k - 1];
            --k;
        }
        unsort[k] = temp;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int unsort[9] = {8, 8, 7, 7, 5, 4, 3, 2, 1};
    insertSort(unsort, 9);
    for (int i:unsort)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}

