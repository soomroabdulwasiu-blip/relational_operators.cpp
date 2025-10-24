#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << a << " == " << b << " : " << (a == b ? "true" : "false") << endl;
    cout << a << " != " << b << " : " << (a != b ? "true" : "false") << endl;
    cout << a << " > "  << b << " : " << (a > b  ? "true" : "false") << endl;
    cout << a << " < "  << b << " : " << (a < b  ? "true" : "false") << endl;
    cout << a << " >= " << b << " : " << (a >= b ? "true" : "false") << endl;
    cout << a << " <= " << b << " : " << (a <= b ? "true" : "false") << endl;

    return 0;
}
