#include <iostream>
#include "employee.h"
#include "fulltime.h"
#include "parttime.h"
#include "status.h"
#include "salaries.h"

int main() {
    // Создание сотрудников
    FullTime fullTimeEmployee("John Doe", EmployeeRole::senior);
    PartTime partTimeEmployee("Jane Smith", EmployeeRole::junior);

    // Устанавливаем начальные параметры
    fullTimeEmployee.set_salary(fulltime_fixed_salary);
    partTimeEmployee.set_salary(parttime_fixed_salary_in_hour * 20); // 20 часов работы в неделю

    // Печать информации о сотрудниках
    std::cout << "Full-Time Employee Details: \n";
    fullTimeEmployee.display_details();
    std::cout << "\n";

    std::cout << "Part-Time Employee Details: \n";
    partTimeEmployee.display_details();
    // std::cout << "\n";

    // Расчёт и вывод зарплаты
    std::cout << "Full-Time Employee Salary: " << fullTimeEmployee.calculate_salary() << " $ \n";
    std::cout << "Part-Time Employee Salary: " << partTimeEmployee.calculate_salary() << " $ \n";

    // Промоутируем сотрудников
    fullTimeEmployee.promote();
    partTimeEmployee.promote();

    std::cout << "\nAfter Promotion:\n";
    fullTimeEmployee.display_details();
    partTimeEmployee.display_details();

    return 0;
}
