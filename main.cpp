#include <iostream>
using namespace std;

int main() {

    int inputInteger = 0, counterInteger = 0;

    cout << "Enter number:";
    cin >>  inputInteger;

    while (inputInteger != 0){
        counterInteger++;
        inputInteger = inputInteger / 10;
    }
    
    cout << "\nTotal numbers of digits: " << counterInteger;

}