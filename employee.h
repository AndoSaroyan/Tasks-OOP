
class Employee {

    public:
    void set_name ();
    void set_year ();
    void set_salary();
    void set_address();

    std::string get_name();
    int get_year();
    int get_salary();
    std::string get_address();


    private:
    std::string name;
    int year;
    int salary;
    std::string address;

};


void Employee::set_name(){
    std::string a;
    std::cin>>a;
    name=a;
}

void Employee::set_year(){
    int tiv;
    std::cin>>tiv;
    year=tiv;
}

void Employee::set_address(){
    std::string hasce;
    std::cin>>hasce;
    address=hasce;
}

void Employee::set_salary(){
    int ashx;
    std::cin>>ashx;
    salary=ashx;
}

std::string Employee::get_address() {
    return address;
}

int Employee::get_salary(){
    return salary;
}

int Employee::get_year (){
    return year;

}

std::string Employee::get_name(){
    return name;
}
