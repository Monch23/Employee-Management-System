#ifndef UTILITIES_H
#define UTILITIES_H
#include "employee.h"

class Utilities : protected Employee {
    public:
        bool valid_data(const Employee &employee);
        Employee &search_employee(int id);
        Employee &search_employee(const std::string &name);
        void show_all_interns(void);
        void show_all_part_time_employees(void);
        void show_all_full_time_employees(void);
};

#endif