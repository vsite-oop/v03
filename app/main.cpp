#include "app.h"

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
    using namespace vsite::oop::v3;
    int n; std::cin>>n;
    results r(n);
    for(int i=0;i<n;++i){
        student s;
        std::cin>>s.name>>s.grade;
        r.add(s);
    }
}
