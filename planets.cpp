#include <iostream>
#include "planets.h"
#include <cmath>

 void Planet::set_dfs (){
     double dis;
     std::cin>>dis;
     dfs=dis;
 }

void Planet::set_massa (){
    double a;
    std::cin>>a;
    massa=a;
}
 
 void Planet::set_name(){
    std::string anvanum;
    std::cin>>anvanum;
    name=anvanum;
 }

 void Planet::set_radius (){
     double r;
     std::cin>>r;
    radius=r;
 }

 void Planet::set_gravity ()
 {   gravity=0.0000000000667;   }

 std::string Planet::get_name (){

       return name;
 }

 double Planet::get_radius(){
     return radius;
 }

double Planet::get_dfs (){
    return dfs;
}

double  Planet::solve_g(){
    double G= gravity;
    double g=  G * massa/(radius *radius);
    return g; 

}


int main(){

    Planet M;
    std::cout<<"Enter Name"<<std::endl;
    M.set_name();
    std::cout<<"Enter Masa(t)"<<std::endl;
    M.set_massa();
    std::cout<<"Distance from Sun(km)"<<std::endl;
    M.set_dfs();
    std::cout<<"Enter Radious(km)"<<std::endl;
    M.set_radius();
    std::cout<<"Answer is  "<<M.solve_g();



}





