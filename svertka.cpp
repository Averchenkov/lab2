#include "library.h"

int svertka(std::vector<int> &a,int (*function)(int,int),int start)
{
    int r=0;
    for(int i=0;i<a.size();i++)
    {
        r=function(r,a[i]);
    }
    return r;
}
