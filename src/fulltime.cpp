#include "fulltime.h"

FullTime::FullTime(const std::string &name, EmployeeRole emp_role) :
        Employee(name, fulltime_fixed_salary, emp_role, EmploymentType::full_time) 
{
    m_health_insurance = true;
    m_gym_membership = true;
    m_paid_time_off = false;
}

double FullTime::calculate_salary(void) const {
    return m_base_salary * m_rate;
}

void FullTime::promote(void) {
    ++(*this);
}

void FullTime::display_details(void) const {
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "ID: " << m_ID << std::endl;
    std::cout << "Base Salary: " << calculate_salary() << std::endl;

    std::string tmp;

    switch (m_role) {
        case (EmployeeRole::intern) :
            tmp = "Intern";
            break;
        case (EmployeeRole::junior) :
            tmp = "Junior";
            break;
        case (EmployeeRole::middle) :
            tmp = "Middle";
            break;
        case (EmployeeRole::senior) :
            tmp = "Senior";
            break;
        default :
            tmp = "Undefined";
    }

    std::cout << "Role: " << tmp << std::endl;
    std::cout << "Employment: " << ((m_employment_type == EmploymentType::part_time) ? "Part Time \n" : "Full Time \n");

    switch (m_status) {
        case (EmployeeStatus::active) :
            tmp = "Active";
            break;
        case (EmployeeStatus::inactive) :
            tmp = "Inactive";
            break;
        case (EmployeeStatus::on_leave) :
            tmp = "On leave";
            break;
        case (EmployeeStatus::retired) :
            tmp = "Retired";
            break;
        default :
            tmp = "Undefined";
        }

    std::cout << "Status: " << tmp << std::endl;
    std::cout << "Rate: " << m_rate << std::endl;

}

void FullTime::send_to_paid_off(void) {
    m_status = EmployeeStatus::on_leave;
    m_paid_time_off = true;
}

FullTime::~FullTime() {
    Employee::~Employee();
}