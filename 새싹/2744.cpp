#include <iostream>

using namespace std;

int main(){

    string str;

    // 입력은 영문만 가능
    cin >> str;

    for(int i=0; i<str.length(); i++){

        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else{
            str[i] = toupper(str[i]);
        }
    }

    cout << str;
}