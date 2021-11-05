class Fibonaci {

    public:
    void fib(int num);

    private:
    int x=0;
    int y=1;
    int z;
};


void Fibonaci::fib(int num){
   
for(int i=0;i<num;++i){

    z=x+y;
    x=y;
    y=z;  
std::cout<< x <<"  ";
   }
}
