#include <iostream>
#include "employee.h"


int main(){

    Employee obj;
    std::cout<<"Write Name:";
    obj.set_name();
    std::cout<<"Write Year of Joining:";
    obj.set_year();
    std::cout<<"Write Salary:";
    obj.set_salary();
    std::cout<<"Write Address:";
    obj.set_address();

    std::cout<<std::endl;
    std::cout<<std::endl;

    std::cout<<"====Name=====";
    std::cout<<"=====Year of Joining====";
    std::cout<<"=====Salary====";
    std::cout<<"======Address===="<<std::endl;
    std::cout<<"    "<<obj.get_name()<<"              "<<obj.get_year()<<"               "<<obj.get_salary()<<"         "<<obj.get_address()<<std::endl;                            

}


