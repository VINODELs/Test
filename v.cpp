#include <iostream>
#include <vector>

int main() {
    std::vector<int> s{1, 2, 3, 4, 5};
    for (const int& elem : s) {
        std::cout << elem << " ";
    }
    std::cout << "\n";
    return 0;
}
