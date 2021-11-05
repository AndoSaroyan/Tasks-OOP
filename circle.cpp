#include <iostream>
#include "circle.h"

int main(){
    std::cout<<"Enter radius:";
    int radius=0;
    std::cin>>radius;
    Circle obj(radius);
    std::cout<<"Area is:"<<obj.area()<<std::endl;
    std::cout<<"Circumferance:"<<obj.circumference()<<std::endl;
}