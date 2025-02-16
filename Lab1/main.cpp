#include <iostream>
#include "LogCon.h"
using namespace std;

int main()
{
    // cout<<R"(a	b	!a	a&b	a|b	a->b a~b a^b)"<<"\n";
    //
    // cout<<"1\t1\t";
    // cout<<NOT(true)<<"\t"<<AND(true,true)<<"\t"<<OR(true,true)<<"\t";
    // cout<<IMP(true,true)<<"\t"<<EQ(true,true)<<"\t";
    // cout<<XOR(true,true)<<"\n";
    //
    // cout<<"1\t0\t";
    // cout<<NOT(true)<<"\t"<<AND(true,false)<<"\t"<<OR(true,false)<<"\t";
    // cout<<IMP(true,false)<<"\t"<<EQ(true,false)<<"\t";
    // cout<<XOR(true,false)<<"\n";
    //
    // cout<<"0\t1\t";
    // cout<<NOT(false)<<"\t"<<AND(false,true)<<"\t"<<OR(false,true)<<"\t";
    // cout<<IMP(false,true)<<"\t"<<EQ(false,true)<<"\t";
    // cout<<XOR(false,true)<<"\n";
    //
    // cout<<"0\t0\t";
    // cout<<NOT(false)<<"\t"<<AND(false,false)<<"\t"<<OR(false,false)<<"\t";
    // cout<<IMP(false,false)<<"\t"<<EQ(false,false)<<"\t";
    // cout<<XOR(false,false)<<"\n";
    
    cout << "a\tb\tc\tF\n";

    cout << "1\t1\t1\t";
    cout << F7(true, true, true) << "\n";

    cout << "1\t1\t0\t";
    cout << F7(true, true, false) << "\n";

    cout << "1\t0\t1\t";
    cout << F7(true, false, true) << "\n";

    cout << "1\t0\t0\t";
    cout << F7(true, false, false) << "\n";

    cout << "0\t1\t1\t";
    cout << F7(false, true, true) << "\n";

    cout << "0\t1\t0\t";
    cout << F7(false, true, false) << "\n";

    cout << "0\t0\t1\t";
    cout << F7(false, false, true) << "\n";

    cout << "0\t0\t0\t";
    cout << F7(false, false, false) << "\n";

    return 0;
}