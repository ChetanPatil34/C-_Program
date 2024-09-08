#include <iostream>
using namespace std;

int sum(int n) {

    if (n == 1)
        return 1;

    return n + sum(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    
    cout << "Sum of numbers from 1 to " << num << " is " << sum(num) << endl;
    
    return 0;
}
