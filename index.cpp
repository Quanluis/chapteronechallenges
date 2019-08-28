#include <iostream> 
using namespace std;

int main () {

    double cost, supply, total;

    cout << "Last years purchase cost." << endl;

    cout << "Purchase cost of each baseball" << endl;
    cin >> cost ;

    cout << "number of baseballs purchased" << endl;
    cin >> supply ;

    total = supply * cost;

    cout << "The total amount spent was " << total << "$" << endl;

    return 0;
}