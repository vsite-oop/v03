#pragma once
#include <string>

namespace vsite::oop::v3 
{
    struct student{
          
          std::string name;
          int grade;
  
    };
    class results{
        
        int i;
        student* p;
        unsigned place;

        
        public:
         results(unsigned a);
         ~results();
         unsigned has_grade(int a)const;
         unsigned starts_with_letter(char c)const;
         void add(student s);


    };

}