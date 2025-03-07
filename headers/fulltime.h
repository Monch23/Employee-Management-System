#ifndef FULLTIME_H
#define FULLTIME_H
#include "employee.h"
#include <string>

class FullTime : public Employee {
    public:
        FullTime(const std::string &name);
    private:
        double calculate_salary(void) const override;
        Employee *promote(void) override;
        void performance_review(void) override;
        Employee *update_role(const std::string &new_role) override;
};

#endif