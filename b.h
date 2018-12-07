#include <vector>

class Fofo
{
public:
    Fofo(int dat_A);
    ~Fofo() = default;
    Fofo& operator=(const Fofo& other) = delete;
    Fofo(const Fofo& other) = delete;
    
    void init();
    void print();
    
private:
    int m_private;
    std::vector<int> m_num;
    
};
