#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
    int num = rand() % 100;
    cout << num << endl;
    return 0;
}