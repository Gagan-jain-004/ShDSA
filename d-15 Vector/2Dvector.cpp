#include <iostream>
#include <vector>
using namespace std;

int commonfactor(vector<vector<int>>& a) {
    cout << a[0][1] << endl;
    return 1;
}

int main() {
    
    int n, m;
    cin >> n >> m;

    // Allocate inner vectors with size m
    vector<vector<int>> a(n, vector<int>(m));

    // Input values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    commonfactor(a);
    


    // another 
      vector< vector<int>> matrix={{1,2,3},{4,5},{6}};

    for(int i=0;i<matrix.size();i++){
        for (int j = 0; j < matrix[i].size(); j++)
        {
              cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
