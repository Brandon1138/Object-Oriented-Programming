#include <iostream>
#include <string>

class Angajat {
private:
    std::string name;
    int age;
    double salary;

public:
    Angajat(std::string n, int a, double s) : name(std::move(n)), age(a), salary(s) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << ", Salary: " << salary << std::endl;
    }

    [[nodiscard]] double calculateNetSalary() const {
        // Hypothetical net salary calculation
        return salary * 0.85; // Assuming 15% tax deduction
    }
};

int main() {
    Angajat employee1("Razvan Iovanica", 30, 3000.0);
    Angajat employee2("Mihai Voroneanu", 28, 3200.0);

    employee1.display();
    std::cout << "Net Salary of " << employee1.calculateNetSalary() << std::endl;

    employee2.display();
    std::cout << "Net Salary of " << employee2.calculateNetSalary() << std::endl;

    return 0;
}

