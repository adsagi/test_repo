class Fofo
{
public:
    Fofo();
    ~Fofo();
    
    Fofo(const Fofo& other);
    
    Fofo& operator=(const Fofo& other);
    
private:
    int m_private;
    
};
