#ifndef PARTTIME_H
#define PARTTIME_H
#include "employee.h"


class PartTime : public Employee {
    private:
        int m_worked_time;
    public:
        PartTime(const std::string &name);
        double calculate_salary(void) const override;
        Employee *promote(void) override;
        void performance_review(void) override;
        Employee *update_role(const std::string &new_role) override;
};

#endif