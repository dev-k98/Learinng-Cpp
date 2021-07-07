//Variable Sized Arrays :: HackerRank
#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arr ;

    for (int i = 0; i < n ; i++)
    {
        int k;
        cin >> k;
        vector<int> arr2;
        for (int j = 0; j < k; j++)
        {
            int x;
            cin >> x;
            arr2.push_back(x);
        }
        arr.push_back(arr2);
    }
    
    for (int i = 0; i < q; i++)
    {
        int k, l;
        cin >> k >> l;
        cout << arr[k][l]<<endl;
    }
}