#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Person {
private:
    char name[64];
    int age;
    char address[64];
    float basic;
    float da;
    float hra;
    float grossSalary;

public:
    // Default constructor
    Person() {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        basic = da = hra = grossSalary = 0;
    }

    // Parameterized constructor to initialize data and calculate salary components
    Person(const char* pName, int pAge, const char* pAddress, float pBasic) {
        strcpy(name, pName);
        age = pAge;
        strcpy(address, pAddress);
        basic = pBasic;
        
        // Calculating components: DA = 40% of Basic, HRA = 20% of Basic
        da = 0.40f * basic;
        hra = 0.20f * basic;
        grossSalary = basic + da + hra;
    }

    // Accessor function to get age
    int getAge() const {
        return age;
    }

    // Member function to display salary slip for each person
    void displaySalarySlip() const {
        cout << "----------------------------------------\n";
        cout << "              SALARY SLIP               \n";
        cout << "----------------------------------------\n";
        cout << "Name          : " << name << "\n";
        cout << "Age           : " << age << "\n";
        cout << "Address       : " << address << "\n";
        cout << fixed << setprecision(2);
        cout << "Basic Salary  : Rs. " << basic << "\n";
        cout << "DA (40%)      : Rs. " << da << "\n";
        cout << "HRA (20%)     : Rs. " << hra << "\n";
        cout << "----------------------------------------\n";
        cout << "Gross Salary  : Rs. " << grossSalary << "\n";
        cout << "----------------------------------------\n\n";
    }
};

// (a) Inline function that obtains the youngest and eldest age from the array of Person objects
inline void findYoungestAndEldest(const Person persons[], int size) {
    if (size <= 0) return;

    int minAge = persons[0].getAge();
    int maxAge = persons[0].getAge();

    for (int i = 1; i < size; i++) {
        int currentAge = persons[i].getAge();
        if (currentAge < minAge) {
            minAge = currentAge;
        }
        if (currentAge > maxAge) {
            maxAge = currentage;
        }
    }

    cout << "========================================\n";
    cout << "          AGE STATISTICS (INLINE)       \n";
    cout << "========================================\n";
    cout << "Youngest Person's Age : " << minAge << " years\n";
    cout << "Eldest Person's Age   : " << maxAge << " years\
