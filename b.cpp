#include <iostream>
#include <algorithm>

#include "b.h"

Fofo::Fofo(int dat_A) : m_private(dat_A)
{
    
}

void Fofo::init()
{
    m_num.reserve(10);

    for(int i = 0; i < 10; ++i)
    {
        m_num.push_back(i * m_private);
    }
    
}

void Fofo::print()
{
    std::for_each(m_num.begin(), m_num.end(), [](int &n){std::cout<<"n: " << n << std::endl;});
}
