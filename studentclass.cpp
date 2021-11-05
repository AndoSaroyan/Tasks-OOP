#include <iostream>
#include "student.h"


int main(){

    Student obj[5];
    for(int i=0;i<5;++i)
    { std::cout<< "Set " <<i+1<<" Student Name:";
        obj[i].set_name();
        std::cout<< "Set " <<i+1<<" Student Surname:";
        obj[i].set_surname();
        }
     std::cout<<std::endl;
     std::cout<<std::endl;   

    for(int j=0;j<5;++j)
    {
        std::cout<<"  Student "<< j+1<<":";
        std::cout<<obj[j].get_name()<<"  "<<obj[j].get_surname()<<std::endl;
        
    }    

   
}