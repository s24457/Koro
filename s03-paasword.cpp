#include <iostream>
#include <string>


auto main(int argc, char* argv[]) -> int
{
    if (argc == 0) {
        return 1;
    }

    auto const password = std::string{argv[1]};
    std :: string tryPass;
    do {
        std :: cin >> tryPass;
}while (password != tryPass);
std ::cout << "WD";

    return 0;
}
