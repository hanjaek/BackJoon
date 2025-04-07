#include <iostream>

using namespace std;

int main(){

    int t, a, b;

    cin >> t;
    int *arr = new int[t];

    for(int i=0; i < t; i++){
        cin >> a >> b;
        arr[i] = a + b;
    }

    // for문에서 i < sizeof(arr) 했을 때 에러 발생
    // 이유 : t보다 큰 만큼 접근하면 → 쓰레기 값 출력 or 런타임 에러
    for(int i=0; i < t; i++){
        cout << arr[i] << "\n";
    }

    delete[] arr;
}