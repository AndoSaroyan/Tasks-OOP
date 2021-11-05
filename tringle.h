class Triangle{
    public:
    Triangle(int x,int y,int z)
    {a=x; b=y; c=z;}
   double perimeter();
   double area();
 
    private:
    int a;
    int b;
    int c;

 };

 double Triangle::perimeter(){
     int p=a+b+c;
     return p;
 }

 double Triangle::area(){
     int m=  0.5*(c*b);
     return m;
 }

