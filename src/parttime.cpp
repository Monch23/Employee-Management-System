#include "employee.h"
#include "parttime.h"

PartTime::PartTime(const std::string &name, EmployeeRole emp_role) :
        Employee(name, parttime_fixed_salary_in_hour, emp_role, EmploymentType::part_time)
{
    m_hours_worked = 0.0;
    m_hours_wage = m_base_salary;
}

double PartTime::calculate_salary(void) const {
    return m_hours_worked * m_hours_wage * m_rate;
}

void PartTime::promote(void) {
    ++(*this);
}

void PartTime::display_details(void) const {
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
            tmp = "Udefined";
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

void PartTime::set_hours_worked(double hours) {
    m_hours_worked = hours;
}

double PartTime::get_hours_worked(void) const {
    return m_hours_worked;
}

PartTime::~PartTime() {
    Employee::~Employee();
}