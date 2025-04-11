#include <iostream>
#include <vector>

using namespace std;

int main(){

    unsigned t;
    vector<string> v;

    cin >> t;
    cin.ignore();

    for(int i=0; i<t; i++){
        string line;
        getline(cin, line);
        v.push_back(line);
    }

    for(string c : v){
        cout << c[0] << c[c.size()-1] << "\n";
    }
}