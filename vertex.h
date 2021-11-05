class Vertex {
    public:
    void rndm();
    private:
    int x;
    int y;

};


void Vertex::rndm(){
    for(int i=0;i<5;++i)
    {
        x =rand() % 200 -100;
        std::cout<< "("<<x<<",";
        y= rand() % 200 -100;
         std::cout<< y<<")"<<std::endl;
    }
}
