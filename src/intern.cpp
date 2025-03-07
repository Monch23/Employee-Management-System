#include "employee.h"
#include <string>
#include <iostream>

using namespace Roles;

Intern::Intern(const std::string &name, const std::string &role) : Employee(name, role)
{}

double Intern::calculate_salary(void) const {
    return m_salary;
}

// Employee *Intern::promote(void) {
//     Employee *parttime = new PartTime(std::move(m_name), std::move(m_role));


// }

Employee *Intern::update_role(const std::string &new_role) {
    if (new_role == parttime) {
        std::cout << (m_name + " promoted to intern") << std::endl;
        return new PartTime(m_name, m_role);
    } else if (new_role == fulltime) {
        std::cout << (m_name + " promoted to Full-Time") << std::endl;
        return new FullTime(m_name, m_role);
    }

    std::cout << ("Role " + new_role + " is unavaliable for Intern employee") << std::endl;
    return this;
}