#include <iostream>
#include <vector>

using namespace std;

int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int t, a, b;
    
    vector<int> v;

    cin >> t;

    for(int i = 0; i < t; i++){

        cin >> a >> b;
        v.push_back(a+b);

    }

    for(int sum : v){
        cout << sum << "\n";
    }
}