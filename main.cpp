//Area of a circle uri 1002
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double R,A;
    cin >> R;
    A = 3.14159 * R * R;
    cout << "A="<< fixed << setprecision(4) << A << endl;
    return 0;

}

