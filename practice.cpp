#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter the value of num 1:\n";
    cin>>num1;
    cout<<"enter the value of num 2 :\n";
    cin>>num2;

    cout<<"addition of num1 and num2 is :"<<num1 +num2;

    return 0;

1}

// #include<iostream>
// using namespace std;

// int main ()
// {
//     float a= 458.5;
//     float y=a;
//     cout<<a<<endl;
//     cout<<y;

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int a=54;
//     float b=85.55;
//     cout<<"the value of a is :" <<(float)a<<endl;
//     cout<<"the value of b is : "<<(int)b;

//     return 0;
    
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     for(int i=1;i<50;i++)
//     {
//         if(i==3)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
    
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=3;
//     int* b=&a;
//     cout<<&a<<"\n"<<a<<endl;
//     cout<<*b<<endl;

//     int** c =&b;
//     cout<<"address of b is"<<&b<<endl;
//     cout<<"value at c is "<<c<<endl;
//     cout<<**c<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[10]={10,25,14,54,65,25,41,25,14,65};
//     int i=0;
//     while( i<10)
//     {
//         cout<<"marks of student is :"<<arr[i]<<endl;
//         i++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// struct employee
// {
//     int empid;
//     char favchar;
//     float salary;

// };
// int main (){

//     struct employee sahil;

//     sahil.empid=10;
//     sahil.favchar='s';
//     sahil.salary=120000;
//     cout<<sahil.empid<<endl;
//     cout<<sahil.favchar<<endl;
//     cout<<sahil.salary<<endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;


// int fib(int n)
// {
//     if(n<2){
//         return 1;
//     }
//     return fib(n-2)+fib(n-1);
// }
// int factorial(int n)
// {
//     if (n<=1){
//     return 1;
// }
// return n* factorial(n-1);
// }

// int main()
// {
//     int a;
//     cout<<"enter a number :"<<endl;
//     cin>>a;
//     //cout<<"the factorial of "<<a<<"is "<<factorial(a)<<endl;
//     cout<<"the fib series is"<<fib(a)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int sum(int a,int b)
// {
//     return a+b;
// }
// int sum(int a,int b,int c)
// {
//     return a+b+c;
// }
// int volume(int r,int h){
//     return 3.14*r*r*h;
// }
// int area(int a,int b){
//     return a*b;
// }
// int cube(int c)
// {
//     return c*c*c;
// }
// int main ()
// {
//     cout<<"the sum of 3 and 6 is :"<<sum(3,6)<<endl;
//     cout<<"the sum of 5 ,6 and 10 is :"<<sum(5,6,10)<<endl;
//     cout<<"the volume of cuboid is :"<<volume(5,8)<<endl;
//     cout<<"the area of rectangle is:"<<area(5,9)<<endl;
//     cout<<"the cube is :"<<cube(9)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Employee{
//     private:
//         int a,b,c;
//     public:
//         int d,e;

//     void setdata( int a1 ,int b1 ,int c1 );
//     void getdata()
//     {
//         cout<<"the value of a is:"<<a<<endl;
//         cout<<"the valueof b is  :"<<b<<endl;
//         cout<<"the value of c is :"<<c<<endl;
//         cout<<"the value of d is :"<<d<<endl;
//         cout<<"the value of e is :"<<e<<endl;

//     }

// };
// void Employee :: setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee sahil;
//    // sahil.a=55; this is privet 
//     sahil.d=25;
//     sahil.e=56;
//    // Employee sahil;
//     sahil.setdata(1,2,5);
//     sahil.getdata();
//     return 0;

// }


// #include<iostream>
// using namespace std;

// class Binary
// {
//     public:
//     string s;

//     public:
//         void read(void);
//         void chk_bin(void);
//         void ones(void);
//         void display(void);
// };
// void Binary :: read (void)
// {
//     cout<<"enter a binary number "<<endl;
//     cin>>s;
// }
// void Binary :: chk_bin(void)
// {
//     for(int i=0; i<=s.length() ; i++)
//     {
//         if (s.at(i)!='0' && s.at(i)!='1')
//         {
//             cout<<"incorrect binary format "<<endl;
//             exit(0);
//         }

//     }
// }
// void Binary :: ones(void)
// {
//     for(int i=0; i< s.length() ; i++)
//     {
//         if (s.at(i)=='0')
//         {
//             s.at(i)='1';
//         }
//         else 
//         {
//             s.at(i)='0';
//         }
//     }
// }
// void Binary :: display(void)
// {
//     cout<<"displaying binary number "<<endl;

//     for(int i=0; i < s.length() ; i++)
//     {
//         cout<<s.at(i);
//     }
//     cout<<endl;
// }
// int main ()
// {
//     Binary b; 
//     b.read();
//     b.chk_bin();
//     b.display();
//     b.ones();
//     b.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;
 
// class Shop 
// {
//     int itemid[100];
//     int itemprice[100];
//     int counter;

//     public:
//         void initcounter(void)     {counter=0; }
//         void setprice(void);
//         void displayprice(void);
// };

// void Shop :: setprice(void){
//     cout<<"enter id of your item no :"<<counter+1<<endl;
//     cin>>itemid[counter];
//     cout<<"enter price of your item :"<<endl;
//     cin>>itemprice[counter];
//     counter++;
// }
// void Shop :: displayprice(void)
// {
//     for (int i=0; i<counter;i++)
//     {
//         cout<<"the price of item with id"<<itemid[i]<<"is"<<itemprice[i]<<endl;

//     }
// }
// int main()
// {
//     Shop dukaan;
//     dukaan.initcounter();
//     dukaan.setprice();
//     dukaan.setprice();
//     dukaan.setprice();
//     dukaan.displayprice();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     static int count;

//     public:
//         void setdata(void){
//         cout<<"enter employee id "<<endl;
//         cin>>id;
//         count++;
//         }
//         void getdata(void)
//         {
//             cout<<"employee id is "<<id<<"this is a employee no "<<count<<endl;
//         }
//         static void getcount(void){
//             cout <<"the value of count is :"<<count<<endl;

//         }
// };
// int Employee::count=100;
        
// int main(){
//     Employee sahil, rohan, sathish;
//     sahil.setdata();
//     sahil.getdata();
//     Employee :: getcount();

//     rohan.setdata();
//     rohan.getdata();
//     Employee::getcount();

//     sathish.setdata();
//     sathish.getdata();
//     Employee::getcount();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Employee
// {
//     int id;
//     int salary;

//     public:
//         void setid(void){
//             salary =122;
//             cout<<" Enter the id of employee "<<endl;
//             cin>>id;
//         }
//         void getid(void){
//             cout<<"the id of employee is :"<<id<<endl;

//         }
// };

// int main()
// {
//     Employee fb[4];
//     for(int i=0;i<4;i++){
//         fb[i].setid();
//         fb[i].getid();
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Complex{
//     int a;
//     int b;

//     public:
//         void setdata(int v1, int v2)
//         {
//             a=v1;
//             b=v2;

//         }
//         void stedatabysum(Complex o1, Complex o2){
//             a=o1.a+o2.a;
//             b=o1.b+o2.b;

//         }
//         void printnumber(){
//             cout<<"your complex no is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// int main ()
// {
//     Complex c1, c2, c3;
//     c1.setdata(1 ,2);
//     c1.printnumber();

//     c2.setdata(5,6);
//     c2.printnumber();

//     c3.stedatabysum(c1,c2);
//     c3.printnumber();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Complex {
//     //public:
//     int a,b;

//     public:
//         void setnumber(int n1, int n2){
//             a=n1;
//             b=n2;
//         }
//         friend Complex sumComplex(Complex o1,Complex o2);
//         void printnumber(){
//             cout<<" the number is "<<a<<" + "<<b<<"i"<<endl;

//         }

// };
// Complex sumComplex(Complex o1, Complex o2){
//     Complex o3;
//     o3.setnumber((o1.a+o2.a),(o1.b+o2.b))
//     ;
//     return o3;

// }

// int main(){
//     Complex c1 , c2 ,sum ;
//     c1.setnumber(4,5);
//     c1.printnumber();
//     c2.setnumber(5,6);
//     c2.printnumber();
//     //c3=c1+c2;
//     //cout<<"addition is :"<<c3<<endl;
//     sum= sumComplex( c1,c2);
//     sum.printnumber();

//     return 0;

// }

// #include<iostream>
// using namespace std;

// class Complex;

// class Calculator {
//     public:
//         int add (int a ,int b){
//             return a+b;
//         }
//         int sumrealComplex(Complex , Complex );
//         int sumcompComplex(Complex , Complex );
// };
// class Complex {
//     int a,b;

//    // individually decleared
//     //friend int Calculator :: sumrealComplex( Complex , Complex );
//     //friend int Calculator :: sumcompComplex( Complex , Complex );
    
//     // whole class decleared
//     friend class Calculator;

//     public:
//         void setnumber (int n1 , int n2){
//             a=n1;
//             b=n2;
//         }
//         void printnumber(){
//             cout<<" the complex number is :"<<a<<" + "<<b<<"i"<<endl;
//         }
// };
// int Calculator :: sumrealComplex(Complex o1, Complex o2){
//     return (o1.a+o2.a);
// }
// int Calculator :: sumcompComplex(Complex o1, Complex o2){
//     return (o1.b+o2.b);
// }
// int main (){
//     Complex o1, o2;
//     o1.setnumber(2,5);
//     o1.printnumber();
//     o2.setnumber(1,8);
//     o2.printnumber();
//     Calculator calc;
//     int res=calc.sumrealComplex(o1 , o2);
//     cout<<"the sum of real part is :"<<res<<endl;
//     int resc=calc.sumcompComplex(o1 , o2);
//     cout<<"the sum of complex part is : "<<resc<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Y;
// class X{
//     int data;
//     public:
//         void setvalue(int value){
//             data=value;
//         }
//     friend void add(X,Y);
// };
// class Y
// {
//     int num;
//     public:
//         void setvalue(int value){
//             num=value;
//         }
//     friend void add(X,Y);
// };
// void add (X o1, Y o2){
//     cout<<"the sum of X and Y is :"<<o1.data+o2.num<<endl;
// }

// int main (){
//     X a1;
//     a1.setvalue(5);

//     Y b1;
//     b1.setvalue(6);

//     add(a1,b1);
//     return 0;

// }






//________________________________________________________________________________--//






// #include<iostream>
// using namespace std;
// class c2;
// class c1{
//     int val1;
//     friend void exchange( c1 &, c2 &);

//     public:
//         void indata(int a){
//             val1= a;
//         }
//         void display(void){
//             cout<<val1<<endl;
//         }
// };
// class c2{
//     int val2;
//     friend void exchange( c1 &, c2 &);
//     public:
//         void indata(int a){
//             val2=a;
//         }
//         void display(void){
//             cout<<val2<<endl;
//         }
// };
// void exchange (c1 &x , c2 &y);
//    int tmp =x.val1;
//     x.val1=y.val2;
//     y.val= tmp;

// int main(){
//     c1 oc1;
//     c2 oc2;
//     oc1.indata(54);
//     oc2.indata(56);
//     exchange(oc1 , oc2 );
 
//     cout<<"the value of val1 after exchanging is :";
//     oc1.display();
//     cout<<"the value of val2 after exchanging is :";
//     oc2.display();


//     return 0;

// }




// #include<iostream>
// using namespace std;

// class Complex{
//     int a,b;

//     public:

//         Complex(void);

//     void printnumber(){

//         cout<<"your imaginary number is "<<a<<" + "<<b<<"i"<<endl;

//         }
// };
// Complex :: Complex(void)
// {
//     a=10;
//     b=5;
//     cout<<" \n :: hello world ::  My name is Sahil ::"<<endl;
    
// }
 
// int main(){
//     Complex c1, c2;
//     c1.printnumber();
//     c2.printnumber();


//     return 0;

// }

// #include<iostream>
// using namespace std;

// class Complex{
//     int a,b;

//     public:
//         Complex(int , int );

//     void printnumber()
//     {
//         cout<<"the imaginary number is "<<a<<" + "<<b<<"i"<<endl;
//     }
// };
// Complex :: Complex(int x, int y)
// {
//     a=x;
//     b=y;
// }

// int main(){
//     // implicite call

//     Complex a(4,5);
//     a.printnumber();

//     //explicite call
//     Complex b= Complex(10,45);
//     b.printnumber();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Point
// {
//     int x,y;

//     public:
//         Point(int a, int b)
//         {
//             x=a;
//             y=b;
//         }
//         displaypoint(){
//             cout<<"the co ordinates are ("<<x<<","<<y<<")"<<endl;
//         }
// };

// int main(){
//     Point p(10,20);
//     Point q(45,52);
//     Point s(12,25);
//     p.displaypoint();
//     q.displaypoint();
//     s.displaypoint();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Complex
// {
//     int a,b;

//     public:
//         Complex(int x ,int y=45)
//         {
//             a=x;
//             b=y;
//         }
//         void printnumber();
//        /* {
//             cout<<"the imaginary number is :"<<a<<"+"<<b<<"i"<<endl;

//         }*/
//         Complex(int x=4){
//             a=x;
//             b=0;
//         }
// };
// void Complex :: printnumber(){
//             cout<<"the imaginary number is :"<<a<<"+"<<b<<"i"<<endl;

//         }

// int main()
// {
//     Complex c1(4);
//     c1.printnumber();
//     Complex c2();
//     c2.printnumber();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Simple
// {
//     int data1;
//     int data2;
//     int data3;

//     public:
//         Simple(int a ,int b=5 ,int c=45){
//             data1=a;
//             data2=b;
//             data3=c;
//         }
//         void printnumber();
// };

// void Simple :: printnumber(){
//     cout<<"the value od data 1 , data2 and data 3 is :"<<data1<<","
//     <<data2<<" and "<<data3<<endl;
// }

// int main(){
//     Simple c(10);
//     c.printnumber();


//     return 0;
// }


// #include<iostream>
// using namespace std;

// class Bankdeposite{
//     int principal;
//     int years;
//     float interestrate;
//     float returnvalue;

//     public:
//         Bankdeposite(){}
//         Bankdeposite(int p, int y, float r);
//         Bankdeposite(int p, int y, int  r);
//         void show();
// };
// Bankdeposite::Bankdeposite(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestrate = r;
//     returnvalue= principal;
//     for(int i=0; i<y; i++){
//         returnvalue= returnvalue * (1+interestrate);
//     }
// }

// Bankdeposite::Bankdeposite(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestrate = float(r)/100;
//     returnvalue= principal;
//     for(int i=0; i<y; i++){
//         returnvalue= returnvalue * (1+interestrate);
//     }
// }

// void Bankdeposite::show()
// {
//     cout<<endl<<"the principle amount was"<<principal
//     <<" Return value after "<<years<<" years is "<< returnvalue<<endl;
// }
  
// int main(){
//     Bankdeposite bd1, bd2, bd3;
//     int p,y;
//     float r;
//     int R;

//     cout<<"enter the value of p y and r"<<endl;
//     cin>>p>>y>>r;

//     bd1= Bankdeposite(p , y ,r);
//     bd1.show();

//     cout<<"enter the value of p y and R"<<endl;
//     cin>>p>>y>>R;

//     bd2= Bankdeposite(p , y ,R);
//     bd2.show();

//     return 0;
// }



//____________________________________________________________________________________________________//
// #include<iostream>
// using namespace std;

// class Number{
//     int a;

//     public:
//         Number(){
//             a=0;
//         }
//         Number(int num){
//             a=num;
//         }
//         Number(Number &obj){
//             cout<<"the copy constructor is called !!!! "<<endl;
//             a=obj.a;
//         }
//         void display(){
//             cout<<"the number is :"<<a<<endl;
//         }

// };

// int main (){
//     Number x,y,z=45;
//     x.display();
//     y.display();
//     z.display();
//     Number z1(x);
//     z1.display();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int count = 0;

// class num{

//     public:
//         num(){
//             count++;
//             cout<<"this is the time when  constructor is clled for object no "<<count<<endl;

//         }
//         ~num(){
//             cout<<"this is the time when destructor is called for object no "<<count<<endl;
//             count--;

//         }
// };

// int main (){
//     cout<<"we are inside a main function "<<endl;
//     cout<<"the object one is created n1"<<endl;

//     num n1;
//     {
//         cout<<"entering the block "<<endl;
//         cout<<"creating a two more object "<<endl;
//         num n2,n3;
//         cout<<"existing the block "<<endl;

//         return 0;
//     }
//     cout<<"back to main function "<<endl;
// }


