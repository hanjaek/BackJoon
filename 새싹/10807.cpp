#include <iostream>
#include <sstream>

using namespace std;

int main(){

    int n, v;
    string line;

    cin >> n;
    cin.ignore();

    getline(cin, line);
    stringstream numbers(line);
    int number;

    cin >> v;

    int cnt = 0;

    while(numbers >> number){
        if (number == v){
            cnt++;
        }
    }

    cout << cnt;
}