#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

//template <class T, class S>

// S summa(S x,T y)
// {
//     return x+y;
// }

template <class T, class S>
S svertka(vector<T> &a,S (*function)(S,T),S start)
{
    S r=start;
    for(int i=0;i<a.size();i++)
    {
        r=function(r,a[i]);
    }
    return r;
}

int main()
{
    vector<int> a;
    int n,b;
    float start = 0;
    cout << "Vvedite:" << endl << endl;
    cout << "Kol-vo elementov v massive: ";
    cin >> n;
    
    cout << "Massiv: ";
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    cout << "Startovoe znachenie: ";
    cin >> start;
    cout << endl;
    
    float(*summa)(float,int) = [](float a,int b) -> float 
    {
        return a+b;
    };

    cout << "Summa vsex elementov v massive = " << svertka(a,summa,start);
}
