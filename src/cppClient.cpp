#include <iostream>
#include <corelibrary.hpp>

using namespace std;

int main()
{
    cout << "In CPP Client" << endl;
    cout << "Instantiating with 3" <<endl;
    auto coreInstance = new CoreClass(3);
    coreInstance->output();
    cout << "adding 5 = " << coreInstance->add(5) << endl;
    coreInstance->output();
    output();
    auto a = 3, b = 7;
    cout << "client adding " << a << " + " << b << " = " << add(a, b) << endl;
    return 0;
}

