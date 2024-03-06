#include <iostream>
using namespace std;

int main() {
    int a, b, ret;
    cin >>a;
    cin >>b;
    if (a>b) {
        ret=a-b;
    }
    else {
        ret=b-a;
    }
    cout << ret <<endl;
    return 0;
}
