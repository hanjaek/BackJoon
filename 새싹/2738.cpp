#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){

    int m, n; // m행 n열
    string line;
    int number;

    // 입력은 n x m 행렬
    cin >> n >> m ; 
    cin.ignore();

    vector<vector<int>> v1(n, vector<int>(m));
    vector<vector<int>> v2(n, vector<int>(m));
    vector<vector<int>> result(n, vector<int>(m));

    for(int i=0; i<n; i++){

        getline(cin, line);
        stringstream numbers(line);
        
        for(int j=0; j<m; j++){
            numbers >> v1[i][j];
        }
    }

    for(int i=0; i<n; i++){

        getline(cin, line);
        stringstream numbers(line);
        
        for(int j=0; j<m; j++){
            numbers >> v2[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            result[i][j] = v1[i][j] + v2[i][j];
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

}