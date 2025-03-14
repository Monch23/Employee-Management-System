#include "employee.h"
#include "status.h"
#include <iostream>
#include <string>

namespace Rates {
    double intern_rate = 1.0;
    double junior_rate = 1.2;
    double middle_rate = 1.5;
    double senior_rate = 2.0;
}

std::atomic<int> Employee::m_unique_IDs = 999;

Employee::Employee(const std::string &name, double base_salary, EmployeeRole role, EmploymentType emp_type) :
    m_ID{++m_unique_IDs},
    m_name{name},
    m_base_salary{base_salary},
    m_role{role},
    m_employment_type{emp_type},
    m_status{EmployeeStatus::active}
{
    switch (role) {
        case (EmployeeRole::intern) :
            m_rate = Rates::intern_rate;
            break;
        case (EmployeeRole::junior) :
            m_rate = Rates::junior_rate;
            break;
        case (EmployeeRole::middle) :
            m_rate = Rates::middle_rate;
            break;
        case (EmployeeRole::senior) :
            m_rate = Rates::senior_rate;
            break;
    }
}

// operator++() is used in virtual method promote() to promote an employees depending on the type of derived class
Employee &Employee::operator++() {
    double new_rate;

    switch(m_role) {
        case (EmployeeRole::intern) :
            update_role(EmployeeRole::junior);
            new_rate = Rates::junior_rate;
            break;
        case (EmployeeRole::junior) :
            update_role(EmployeeRole::middle);
            new_rate = Rates::middle_rate;
            break;
        case (EmployeeRole::middle) :
            update_role(EmployeeRole::senior);
            new_rate = Rates::senior_rate;
            break;
        case (EmployeeRole::senior) :
            std::cout << "There is no role above the Senior \n";
            return *this;
    }

    update_rate(new_rate);
    return *this;
}

int Employee::get_ID(void) const {
    return m_ID;
}

std::string Employee::get_name(void) const {
    return m_name;
}

double Employee::get_salary(void) const {
    return m_base_salary;
}

EmployeeRole Employee::get_role(void) const {
    return m_role;
}

EmploymentType Employee::get_employment_type(void) const {
    return m_employment_type;
}

EmployeeStatus Employee::get_status(void) const {
    return m_status;
}

double Employee::get_rate(void) const {
    return m_rate;
}

void Employee::set_salary(double new_salary) {
    m_base_salary = new_salary;
}

void Employee::update_status(EmployeeStatus new_status) {
    m_status = new_status;
}

void Employee::update_role(EmployeeRole new_role) {
    m_role = new_role;
}

void Employee::update_rate(double new_rate) {
    m_rate = new_rate;
}

Employee::~Employee() {}