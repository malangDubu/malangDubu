//문제 : https://malangdubu.notion.site/0316-a33b133eadd64f5790cb130bbf36f846?pvs=4

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int myArr[100][100] = {0};

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            int myNum;
            cin >> myNum;
            myArr[i][j] = myNum;
        }
    }

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int result=0;
    for (int i=r1-1; i<r2; i++){
        for (int j=c1-1; j<c2; j++) {
            result = result + myArr[i][j];
        }
    }
    cout << result << endl;
    return 0;
}
