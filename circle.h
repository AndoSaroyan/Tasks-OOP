
class Circle {

    public:
    Circle(int a){r=a;}
    double area();
    double circumference();

    private:
    const double pi=3.14;
    int r;
    
};

double Circle::area(){
    double answer;
     answer= pi*r*r;
     return answer;
}

double Circle::circumference(){
    double solution;
    solution=2*pi*r;
    return solution;
}