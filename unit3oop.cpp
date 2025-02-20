
//unit    5   divide by zero
 
// #include<iostream>
// using namespace std;

// void division(int a, int b){
//     try{
//         if (b==0)
//             throw b;
//         cout<<"result :"<<a/b<<endl;
//     }
//     catch (int b){
//         cout<<"cant divide by zero "<<endl;

//     }
// }
// int main(){
//     int a,b;
//     void division (int, int );
//     cout<<"enter numarator";
//     cin>>a;
//     cout<<"enter denominator";
//     cin>>b;
//     division(a,b);

//     return 0;
// }


// multiple catching

// #include<iostream>
// using namespace std;

// void cheakval(int value){
//     try{
//         if (value<0)
//             throw value;
//         else if(value==0)
//            throw "zero is not allowed";
//         else
//             cout<<"value is valid "<<value<< endl;
//     }
//     catch(int e){
//         cout<<"exception : negative value "<<e<<"is not allowed"<<endl;
//         }
//     catch( const char* msg){
//         cout<<"exception :"<<msg<<endl;
//     }
// }

// int main(){
//     int num;
//     cout<<"enter num "<<endl;
//     cin>>num;
//     cheakval(num);

//     return 0;
// }


//template

// #include<iostream>
// using namespace std;

// template <typename T>
// T findmax(T a , T b){
//     if(a<b)
//         {
//             return b;
//         }
//     else
//         {
//             return a;
//         }
// }
// int main (){
//     cout<<"max of 10 and 20 is :"<<findmax(10,20)<<endl;
//     cout<<"max of a and b is : "<<findmax('A','B')<<endl;

//     return 0;
// }


// #include<iostream>
// using namespace std;
 
//  int square(int x){
//     return x * x;
//  }
//  float square(float x){
//     return x * x;
//  }

// int main(){
//    cout<< square(5)<<endl;
//    cout<<square(5.2f)<<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;

// int add(int a, int b){
//     return a+b;
// }
// float add(float a , float b){
//     return a+b;
// }
// double add(double a ,double b){
//     return a+b;
// }
// int main(){

//      //int intresult= add(2,5)
//     cout<<"addition is "<<add(4,5)<<endl;
//     cout<<"addition is "<<add(4.5,5.5)<<endl;
//     cout<<"addition is "<<add(4.8,5.4)<<endl;



//     return 0;
// }

// #include<iostream>
// using namespace std;

// class shape{
// public:
// virtual void draw()=0;
// void display()
// {
//     cout<<"this is shape class drawing a shape"<<endl;
// }
// };
// class circle: public shape{
//     public:
//     void draw()override{
//         cout<<"drawing a cicle"<<endl;
//     }
// };
// class rectangle: public shape{
//     public:
//     void draw()override {
//         cout<<"drawing a rectangle"<<endl;
//     }
// };
//  int main(){
//     shape* shape1 = new circle;
//     shape* shape2 = new rectangle;

//     shape1->draw();
//     shape2->draw();

//  }


// #include<iostream>
// using namespace std;

// class complex{
//     int real;
//     int img;
// public:
//     complex(int r=0, int i=0): real(r),img(i){} 

//     complex operator +(const complex& obj){
//         complex temp;
//         temp.real=real+obj.real;
//         temp.img = img+obj.img;
//         return temp;
//     }
//     complex operator -(const complex& obj){
//         complex temp;
//         temp.real=real- obj.real;
//         temp.img=img - obj.img;
//         return temp;
//     }
//     void display(){
//         cout<<"imaginary number is \n"<<real<<"+"<<img<<"i"<<endl;

//     }
// };
// int main(){
//     complex c1(10,52);
//     complex c2(14,65);
//     complex c3= c1+c2;
//     complex c4=c1-c2;
//     c1.display();
//     c2.display();
//     c3.display();
//     c4.display();

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class complex{
//     int real;
//     int img;

//     public:
//     complex(int r=0, int i=0):real(r),img(i){}

//     complex operator -(){
//     return complex(-real, -img);
// }   
//     void display(){
//         cout<<"imaginary no. is "<<real<<"+"<<img<<"i"<<endl;
//     }
// };

// int main(){

//     complex c1(10,20);
//     c1.display();
//     complex c2=-c1;
//     c2.display();


//     return 0;
// }


// #include<iostream>
// using namespace std;

// class test{
//     public:
//     int x;
//     explicit test(int i):x(i){}

//     void show(){
//         cout<<"value of x is "<<x<<endl;
//     }
// };

// int main(){
//     test t(10);
//     t.show();
//     return 0;

// }


// #include<iostream>
// using namespace std;

// class test{
//     public:
//      mutable int x;

//     test(int i):x(i){}

//     void modify() const{

//         x=155;
//     }
//     void show()const {
//         cout<<"value of x is "<<x<<endl;
//     }

// };

// int main(){
//     const test t(10);
//     t.modify();
//     t.show();

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
//  int main(){
//     vector<int>vec ={1,2,3,4,5};
//     vec.push_back(6);
//     cout<<"vector element";
//     for(int x : vec)
//     cout<< x <<" ";

//     vec.pop_back();
//     cout<<"vector elment after";
//     for(int x :vec)
//     cout<<x<<" ";

// cout<<"size of vector"<<vec.size()<<endl;
// cout<<"first element"<<vec.front()<<endl;
// cout<<"last element "<<vec.back()<<endl;


//     return 0;
//  }


// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){
//     deque<int> dq={1,2,3,4};
//     cout<<"deque element ";
//     for(int x:dq)
//     cout<< x <<" "<<endl;
//     dq.push_back(45);
//     dq.push_front(5);
//     cout<<"deque element after pushing  ";
//     for(int x:dq)
//     cout<< x <<" "<<endl;
//     dq.pop_back();
//     dq.pop_front();
//     cout<<"deque element after poping ";
//     for (int x: dq)
//     cout<< x <<" "<<endl;
//return 0;
//}

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<int , string> mymap={{1,"sahil"},{2,"pritesh"}};
//     for(auto pair :mymap )
//     cout<<pair.first<<"->"<<pair.second<<endl;

//     mymap[3]="aditya";
//     cout<<"map element after adding "<<mymap[3]<<endl;

// return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>vec={1,2,3,4,5,6,7};
//     if(binary_search(vec.begin(),vec.end(),5)){
//         cout<<"element  found";
//     }
//     else{
//         cout<<"element not found";
//     }

//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>vec={1,2,8,7,6,64,57};
//     sort(vec.begin(),vec.end());
//     cout<<"sorted element ";
//     for(int x:vec)
//     cout<<x<<" ";


//     return 0;
// }
/*
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;

int main(){
    vector<int>vec={1,23,56,5,9};
    cout<<"using input iterator";
    for(auto it = vec.begin();it!= vec.end() ; ++it)
    cout<<*it<<" ";
    return 0;
        }
*/

// #include<iostream>
// using namespace std;

// void divide(int a, int b){
//     try{
//         if(b==0)
//         throw b;
//     cout<<"result ="<<a/b<<endl;
//     }
//     catch(int b){
//         cout<<"cant divide by zero"<<endl;

//     }
// };

// int main(){
//     int a,b;
//     cout<<"entr value of a";
//     cin>>a;
//     cout<<"enter value of b";
//     cin>>b;
//     divide(a,b);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// void cheakval(int value){
//     try{
//         if(value<0)
//         throw value;

//         else if(value==0)
//         throw"value is zero";

//         else
//         cout<<"value is positive";

//     }
//     catch(int e){
//         cout<<"value is nagative";
//     }
//     catch(const char *msg){
//         cout<<"exception "<<msg<<endl;
//     }
// }
// int main(){
//     int num;
//     cout<<"enter value of num";
//     cin>>num;
//     cheakval(num);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// template<typename T>
// class calculator{
//     T a,b;
//     public:
//     calculator(T x, T y):a(x),b(y){}
//     T add(){
//         return a+b;
//     }
//     T subtract(){
//         return a-b;
//     }

// };
// int main(){
//     calculator<int>intcal(10,5);
//     cout<<"integer addition is "<<intcal.add()<<endl;
//     cout<<"inteer subtration is "<<intcal.subtract()<<endl;

//     calculator<float>floatcal(50,40);
//     cout<<"addition"<<floatcal.add()<<endl;
//     cout<<"subtraction"<<floatcal.subtract()<<endl;
// }


// #include<iostream>
// using namespace std;

// void functionA(){
//     try{
//         throw "error occur in fun a";
//     }
//     catch(...){
//         cout<<"handling a exception  rethrow a error";
//         throw;
//     }
// }
// int main(){
//     try{
//         functionA();
//     }
//     catch(const char *msg){
//     cout<<"caught in main"<<msg<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;

// void safefun()noexcept{
//     cout<<"this funtion is no throw exception";
// }
// void riskyfun()throw(int){
//     throw 10;
// }

// int main(){
//     safefun();
//     try{
//         riskyfun();
//     }
//     catch(int e){
//         cout<<"caught in main"<<e<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// #include<exception>
// using namespace std;

// class myexception:public exception{
//     public:
//     const char*what()const noexcept override{
//         return "user defined exception occur"<<endl;
//     }
//     void cheakval(int value){
//         if (value<0)
// throw myexception();
//     }

// };
// int main(){
//     try{
//         cheakval(-1);
//     }
//     catch(const myexception& e ){
//         cout<<e.what()<<endl;
//     }
//     return 0;

// }
////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

// #include<iostream>
// using namespace std;

// class test{
//     public:
//     test(){
//         cout<<"constructor is called";
//     }
//     ~test(){
//         cout<<"destructor is called";
//     }

// };
// int main(){
//     try{
//         test obj;
//         throw 100;
//     }
//     catch(int e){
//         cout<<"exception"<<e<<endl;
//     }
// }


#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    ofstream  outfile("example.txt");

    if(!outfile){
        cerr<<"error creating file"<<endl;
        return 1;
    }

    outfile<<"sahil khamkar"<<endl;;
    outfile<<"dpy "<<endl;
    outfile<<"second year"<<endl;

    cout<<"file created and write susscesfully"<<endl;
    outfile.close();

   ifstream infile("example.txt");
   
   if(!infile){
    cerr<<"error in opening file"<<endl;
    return 1;
   }
   string line;
   cout<<"reading from file ...........";
   while(getline(infile,line)){
    cout<<line<<endl;
   }
   infile.close();


   const char *filename="example.txt";
   if (remove(filename) ==0){
    cout<<"delete sucessfully";
   }
   else{
    cerr<<"error"<<endl;
   }

}
