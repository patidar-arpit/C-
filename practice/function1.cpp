#include<iostream>

using namespace std;

foo() {
    return 42; // The compiler assumes int as the return type
}

 int main() {
    std::cout << foo() << std::endl;
    std::cout << -10 - 10 - 10;  // -30

    return 0;
}