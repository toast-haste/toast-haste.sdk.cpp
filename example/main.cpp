#include <Haste.h>
#include <iostream>

using namespace std;
using namespace haste;

void main() {
    cout << "Hi~" << endl; 

    shared_ptr<NetworkConnnect> sp = make_shared<NetworkConnnect>();

    sp->Connect("aaaa", 12);
}