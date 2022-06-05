

#include<iostream>
#include"dlb_basic_flags.h"

using namespace std;
using namespace dlb;

enum simple_flags
{
f_1=(1<<0),
f_2=(1<<1),
f_3=(1<<2)
};

void printFlags(const dlb_basic_flags& bf);
int main()
{
dlb_basic_flags bs(0);
cout<<"showing everything zeroed"<<endl;
printFlags(bs);
cout<<"Seting f_1 and showing..."<<endl;
bs.setflag(f_1);
printFlags(bs);
cout<<"Seting f_2 and f_3 and showing..."<<endl;
bs.setflag(f_2|f_3);
printFlags(bs);
cout<<"Removing f_2 and showing..."<<endl;
bs.removeflag(f_2);
printFlags(bs);
return 0;
}

void printFlags(const dlb_basic_flags& bf)
{
cout<<"f_1 has set? "<<boolalpha<<bf.flag_contains(f_1)<<endl;
cout<<"f_2 has set? "<<boolalpha<<bf.flag_contains(f_2)<<endl;
cout<<"f_3 has set? "<<boolalpha<<bf.flag_contains(f_3)<<endl;
}
