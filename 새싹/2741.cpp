#include <iostream>

using namespace std;

int main(){

    unsigned n;

    cin >> n;

    for(int i=1; i<=n; i++){
        cout << i << "\n";
    }
}

// endl 사용하면 시간 초과 -> \n 사용