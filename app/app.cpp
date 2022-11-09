#include "app.h"
#include <algorithm>

namespace vsite::oop::v3
{
    results::results(unsigned a):place(a),i(0){

          p=new student[place];
        
    }
    results::~results(){
        delete[] p;
        p=nullptr;
    }

    unsigned results::has_grade(int a)const{
        unsigned grades=0;
        for(int i=0;i<place;++i){
            if(p[i].grade==a)grades++;

        }
        return grades;
    }
    unsigned results::starts_with_letter(char c)const{
        unsigned letters=0;
        for(int i=0;i<place;++i){
            if(toupper(p[i].name[0])==toupper(c))letters++;

        }
        return letters;
    }


    void results::add(student s){
        p[i]=s;
        ++i;

    }
    
    

}