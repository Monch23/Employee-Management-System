#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "intern.h"
#include "parttime.h"
#include "fulltime.h"
#include "status.h"
#include "salaries.h"

class Employee {
    protected:
        static int m_unique_IDs;
        int m_ID;
        std::string m_name;
        double m_salary;
        std::string m_role;
        std::string m_status;
    public:
        Employee(const std::string &name, const std::string &role);
        virtual ~Employee() = 0;
        friend class Utilities;
    
        virtual double calculate_salary(void) const = 0;
        virtual Employee *promote(void) = 0;
        virtual void performance_review(void) = 0;
        virtual Employee *update_role(const std::string &new_role) = 0;

        int get_ID(void) const;
        std::string get_name(void) const;
        double get_salary(void) const;
        std::string get_role(void) const;
        std::string get_status(void) const;
        void set_status(const std::string &new_status);
};

#endif