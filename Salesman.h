//Class Declaration
class Salesman
{
  private:
    int salesmanId;
    const char* salesmanName;
    int salary;
    int contactNo;

  public:
    Salesman();
    
    void setSalesmanDetails(int sID, const char* sName, int sSalary, int sContact);
    void displaySalesmanDetails();
    void setSalesmanContactNo();

    ~Salesman();
};