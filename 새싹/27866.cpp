#include <iostream>

using namespace std;

int main(){

    string s;
    unsigned i;

    cin >> s;
    cin.ignore();
    cin >> i;

    cout << s[i-1];
    
}