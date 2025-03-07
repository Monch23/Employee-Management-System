#include "employee.h"

using namespace Roles;

FullTime::FullTime(const std::string &name) : Employee(name, fulltime) {
    m_salary = fulltime_fixed_salary;
}

double FullTime::calculate_salary(void) const {
    return m_salary;
}

