#include <iostream>
using namespace std;

auto main (int argc,char* argv[])->int {
    auto const a = stoi(argv[1]);
    auto const b = stoi(argv[2]);
    cout << a - b << endl;
    return 0;
}
