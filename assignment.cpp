 #include<iostream>
#include<string.h>
using namespace std;
class publication
{
protected:
string title;
float prc;
public:
void set()
{
cout<<"\nEnter title";
cin>>title;
cout<<"\nEnter price";
cin>>prc;
}
};
class book:public publication
{
int cnt;
public:
void get()
{
cout<<"\nEnter page count";
cin>>cnt;
}
void disp()
{
try
{
if(cnt==0||prc==0)
{
cout<<"Book count or price cannot be 0 ";
throw cnt;
}
else
{
cout<<"\nBOOK DETAILS"<<endl;
cout<<"\nTitle ="<<title;
cout<<"\nPrice="<<prc;
cout<<"\nPage Count="<<cnt<<endl;
}
}
catch(int i)
{
cout<<"\nTitle=0";
cout<<"\nPrice=0";
cout<<"\nPage Count=0"<<endl;
}
}
};
class tape:public publication
{
float time;
public:
void get()
{
cout<<"\nEnter playing time in minutes";
cin>>time;
}
void disp()
{
try
{
if(time==0||prc==0)
{
cout<<"\nTape time or price cannot be 0";
throw time;
}
else
cout<<"\nTitle:"<<title<<"\nPrice"<<prc<<"\nPlaying time in minutes"<<time<<endl;
}
catch(float z)
{
cout<<"\nTitle=0";
cout<<"\nPrice=0";
cout<<"\nTape time=0.0"<<endl;
}
}
};
int main()
{
book b;
cout<<"\nEnter book details";
b.set();
b.get();
cout<<"\nBOOK DETAILS\n";
b.disp();
tape t;
cout<<"\nEnter tape details";
t.set();
t.get();
cout<<"\nTAPE DETAILS\n";
t.disp();
return 0;
}