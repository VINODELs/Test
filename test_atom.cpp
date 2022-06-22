#include <iostream>
#include <iomanip>
#include <vector>

using std::vector;

namespace consts {
    const double e = 2.71182821828;
    const double pi = 3.14159265;
}
int main() {
    vector<double> s{consts::e, consts::pi};
    for (auto it = s.begin(); it != s.end(); ++it) {
        std::cout << std::setprecision(20) << *it << "\n";
    }
    return 0;
}
