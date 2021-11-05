class Planet {

    public:

    void set_name ();
    void set_dfs ();
    void set_gravity ();
    void set_radius ();
    void set_massa ();
   std::string get_name ();
   double get_dfs ();
    double get_gravity ();
    double get_radius();
   double solve_g ();

    private:
    std::string name;
    double dfs;
    double gravity;
    double radius;
    double massa;
};