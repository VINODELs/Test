#include <iostream>
#include <vector>

int main() {
    std::vector<int> s{1, 2, 3};
    std::vector<int>* p = reinterpret_cast<std::vector<int>*>(&s);
    std::cout << s.size() << "\n";
    p->size_type;
}
