#ifdef OFFICE_H
#define OFFICE_H
#include "employee.h"
#include "intern.h"
#include "parttime.h"
#include "fulltime.h"
#include <vector>

class Office {
    private:
        std::vector<Intern*> m_interns;
        std::vector<PartTime*> m_parttimes;
        std::vector<FullTime*> m_fulltimes;
    
};

#endif