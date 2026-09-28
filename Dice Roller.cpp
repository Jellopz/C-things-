#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    int num1 = rand() % 6 + 1;
    int num2 = rand() % 6 + 1;
    cout << "You rolled a " << num1 << " and a " << num2 << endl;
    return 0;
}