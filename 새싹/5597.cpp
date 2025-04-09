#include <iostream>

using namespace std;

int main(){

    int check[30] = {0};
    int flag;

    for(int i=0; i<28; i++){

        flag = 0;
        cin >> flag;
        check[flag-1] = 1;

    }

    for(int j=0; j<30; j++){

        if(check[j]==0){

            cout << j+1 << "\n";

        }

    }
}