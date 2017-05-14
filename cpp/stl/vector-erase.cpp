#include <vector>
#include <iostream>
using namespace std;

/*
Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

Sample Input
6
1 4 6 2 8 9
2
2 4

Sample Output
3
1 8 9
*/


int main() {
    int n, t, a, b;
    cin >> n;
    vector<int> nums;
    int tmp;
    for (int i=0; i<n; i++){
        cin >> tmp;
        nums.push_back(tmp);
    }
    cin >> t >> a >> b;
    nums.erase(nums.begin()+t-1);
    nums.erase(nums.begin()+a-1, nums.begin()+b-1);
    
    cout << nums.size() << endl;
    for (int i:nums)
        cout << i << " ";        
    return 0;
}
