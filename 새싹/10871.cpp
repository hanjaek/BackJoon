#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){

    unsigned n, x;
    vector<int> v;
    string line;

    cin >> n >> x;
    cin.ignore();

    getline(cin, line);
    stringstream numbers(line);
    int number;

    while (numbers >> number){
        if (number < x){
            cout << number << " ";
        }
    }
}