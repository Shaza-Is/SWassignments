
#include "move.cpp"
#include <iostream>
using namespace std;
int main()
{
    Move o(1,1);

    Move m(2,3);

    o.showmove();
    o = o.add(m);
    o.showmove();
    o.reset(0,0);
    o.showmove();

    return 0;

}

