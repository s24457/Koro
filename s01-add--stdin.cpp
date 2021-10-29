include <iostream>
using namespace std;

auto ask_user_for_int(string prompt)-> int {
    cout << prompt << "int: ";
    auto n = string {};
    getline(cin, n);
    return stoi(n);
}

auto main () -> int {
    auto const a = ask_user_for_int("a= ");
    auto const b = ask_user_for_int("b= ");
    cout << a + b << endl;
    return 0;
}
