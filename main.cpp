#include <iostream>
#include <vector>
#include "library.h"

using namespace std;

int main()
{
    vector<int> a;
    int n;
    int start;
    cout << "Vedite:" << endl << endl;
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
    
    cout << "Summa vsex elementov v massive = " << svertka(a,summa,0);
}
