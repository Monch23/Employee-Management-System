#include "employee.h"
#include <iostream>
#include <string>

int Employee::m_unique_IDs = 999;
using namespace Status;

Employee::Employee(const std::string &name, const std::string &role) :
    m_ID{++m_unique_IDs},
    m_name{name},
    m_salary{0.0},
    m_role{role},
    m_status{"undefined"}
{}

int Employee::get_ID(void) const {
    return m_ID;
}

std::string Employee::get_name(void) const {
    return m_name;
}

double Employee::get_salary(void) const {
    return m_salary;
}

std::string Employee::get_role(void) const {
    return m_role;
}

std::string Employee::get_status(void) const {
    return m_status;
}

void Employee::set_status(const std::string &new_status) {
    if (new_status != active || new_status != inactive || new_status != vacation || new_status != retired) {
        std::cout << "Unavailable status !" << std::endl;
        return;
    }

    m_status = new_status;
}