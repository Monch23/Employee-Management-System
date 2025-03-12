#ifndef FULLTIME_H
#define FULLTIME_H
#include "employee.h"
#include <string>

class FullTime : public Employee {
    private:
        bool m_health_insurance;
        bool m_gym_membership;
        bool m_paid_time_off;
    public:
        FullTime(const std::string &name, EmployeeRole emp_role);
        ~FullTime();
    public:
        double calculate_salary(void) const override;
        void promote(void) override;
        void display_details(void) const override;

        void send_to_paid_off(void);
};

#endif