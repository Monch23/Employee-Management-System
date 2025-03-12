#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
#include "status.h"
#include "salaries.h"

class Employee {
    public:
        static int m_unique_IDs;
        int m_ID;
        std::string m_name;
        double m_base_salary;
        EmployeeRole m_role;
        EmploymentType m_employment_type;
        EmployeeStatus m_status;
        double m_rate;
    public:
        Employee(const std::string &name, double base_salary, EmployeeRole role, EmploymentType emp_type);
        virtual ~Employee();
    
        virtual double calculate_salary(void) const = 0;
        virtual void promote(void) = 0;
        
        Employee &operator++();
        virtual void display_details(void) const = 0;

        // getters
        int get_ID(void) const;
        std::string get_name(void) const;
        double get_salary(void) const;
        EmployeeRole get_role(void) const;
        EmploymentType get_employment_type(void) const;
        EmployeeStatus get_status(void) const;
        double get_rate(void) const;

        // setters
        void set_salary(double salary);
        void update_status(EmployeeStatus new_status);
        void update_role(EmployeeRole new_role);
        void update_rate(double new_rate);
    };

#endif