#include <iostream>
using namespace std;

int main() {
    string symp;
    int temp;
    int emergency=0;

    for (int i=0; i<3; i++){
        cin >> symp >> temp;
        if (symp == "Y" && temp>=37) {
            emergency+=1;
        }
    }

    if (emergency >=2) {
        cout << "E" <<endl;
    }
    else {
        cout << "N" <<endl;
    }

    return 0;
}
