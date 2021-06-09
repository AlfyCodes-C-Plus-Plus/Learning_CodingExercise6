#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec{10, 20, 30, 40, 50};

    cout << "Vector at 0 is: " << vec.at(0) << endl;
    cout << "Vector at 4 is: " << vec.at(4) << endl;

    vec.at(0) = 100;
    vec.at(4) = 1000;

    cout << "Vector at 0 is: " << vec.at(0) << endl;
    cout << "Vector at 4 is: " << vec.at(4) << endl;

    return 0;
}