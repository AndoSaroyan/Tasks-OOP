
class Student {
   public:
   void set_name();
   void set_surname();
   char* get_name ();
   char* get_surname();

    private:
    char name [20];
    char surname [40];

};

void Student::set_name(){
    std::cin.getline(name,20);

}

void Student::set_surname(){
    std::cin.getline(surname,40);
}

 char* Student::get_name(){
    
    return name;
}

char* Student::get_surname(){
    return surname;
}
