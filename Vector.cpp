#include <iostream>
#include <array>

using namespace std;

int main()
{
    //pake library array
    array<int, 5> nilai = {90,97,92,94,95};
    for(int i=0; i<nilai.size();i++) {
        cout<<nilai[i]<<endl;
    }

    return 0;
}