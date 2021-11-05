#include <iostream>
#include "tringle.h" 
 
 int main(){
     std::cout<<"Enter Right Triangle Sides(At first hypotenuse):";
     int arr[3];
     for(int i=0;i<3;++i){
         std::cin>>arr[i];
     }
     Triangle obj(arr[0],arr[1],arr[2]);
     std::cout<<"Area is:"<<obj.area()<<std::endl;
     std::cout<<"Perimeter is:"<<obj.perimeter()<<std::endl;
   
 }