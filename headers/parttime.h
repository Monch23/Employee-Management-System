#ifndef PARTTIME_H
#define PARTTIME_H
// #include "employee.h"
class Employee;

class PartTime : public Employee {
    private:
        double m_hours_worked;
        int m_hours_wage;    
    public:
        PartTime(const std::string &name, EmployeeRole emp_role);
        ~PartTime();
        double calculate_salary(void) const override;
        void promote(void) override;
        void display_details(void) const override;

        void set_hours_worked(double hours);
        double get_hours_worked(void) const;
};

#endif