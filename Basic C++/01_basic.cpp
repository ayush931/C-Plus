#include <iostream>
using namespace std;

using std::cout;
using std::endl;

namespace mySpace {
    void display () {
        // comment
    }
}

int main () {
    mySpace::display();
    cout << "Hello \n";
    std::cout << "Hii" << std::endl;
}