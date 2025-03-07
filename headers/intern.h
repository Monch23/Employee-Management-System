#ifndef INTERN_H
#define INTERN_H
#include "employee.h"

class Intern : public Employee {
    public:
        Intern(const std::string &name, const std::string &role);
        double calculate_salary(void) const override;
        Employee *promote(void) override;
        void performance_review(void) override;
        Employee *update_role(const std::string &new_role) override;
};

#endif