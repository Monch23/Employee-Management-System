#ifndef STATUS_H
#define STATUS_H
#include <string>

enum class EmployeeRole { 
    intern, 
    junior, 
    middle, 
    senior 
};

enum class EmploymentType { 
    part_time,
    full_time 
};
enum class EmployeeStatus { 
    active, 
    on_leave, 
    inactive, 
    retired 
};

namespace Rates {
    extern double intern_rate;
    extern double junior_rate;
    extern double middle_rate;
    extern double senior_rate;
}

#endif