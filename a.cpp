//Some trivial change
#include <iostream>

#include "b.h"
int main()
{
    int r = 5;
    int n = 0;
    
    for(; n < 5; ++n)
    {
        std::cout <<n<<std::endl;
    }
    
    Fofo a(50);
    
    a.init();
    a.print();
    
    return r;
}
