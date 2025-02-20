#include<iostream>
using namespace std;



// class base {
//     int balance;    //privet
//     public:
//     base()
//     {
//         cout<<"base class constructor is calling";
//     }
//     void get_balance()
//     {
//         cout<< "\n enter balance";
//         cin>> balance;
//     }
// void display_balance()
// {
//     cout<<"\n balance is "<<balance;
// }
// };
// class Derived : protected base
// {
//     private:
//     protected:
//     public:derived ()
//     {
//         cout<<"\n derived class constructor is calling ";
//     }
// void getdisplay_balance()
// {
//     base :: get_balance();
//     base::display_balance();
//     cout<<"\n  end.....";

// }
// };

// int main(){

//     Derived d;
//     d.getdisplay_balance();
//     return 0;
// }

// class father {
// public: void pittai()
// {
//     cout<<"\n dhama dhama";
// }
// };
// class mother {
//     public: void pittai()
// {
//     cout<< "\n dhama dham dhama dham";

// }
// };
// class child: public father,mother
//  {
    

// };


// int main (){
//     child c1;
//     c1.pittai();

//     return 0;
// }



// void swap(int* ,int*);
// int main (){
//     int num1= 10;
//     int num2=20;

//     cout<<"\n num1"<<num1;
//     cout<<"\n num2"<<num2;
//     swap(&num1,&num2);


//     return 0;
// }

// void swap(int* num1 ,int* num2){
//     int temp;
//     temp=*num1;
//     *num1=*num2;
//     *num2=temp;
//     cout<<"\n num"<<*num1;
//     cout<<"\n num"<<*num2;
// }




// int main (){
//     int roll_no[5];
//     cout<<"\n size of arry roll no is:"<<sizeof(roll_no);
//     for (int i =1; i<6;i++){
//         cout<<" \nenter roll no : ["<<i<<"]";
//         cin>>roll_no[i];

//     }
//     for (int i=1;i<6;i++)
//     cout<<"\n roll_no["<<i<<"]"<<roll_no[i];
//     cout<<"byy";
//     cout<<"\n .............................";


//     int *p=roll_no;
//     for (int i=1;i<6;i++)
//     cout<<"\n roll_no["<<i<<"]"<<(roll_no+i);
//     cout<<"\n ..........................";

//     for (int i=1;i<6;i++)
//     cout<<"\n roll_no["<<i<<"]"<<*(roll_no+i);
//     cout<<"\n ..........................";
//     return 0;
// }



// int addition (int* ,int);
// int main (){

// int l;
// int arr[l]={};
// cout<<"enter length of array";
// cin>>l;
// for(int i=0;i<l;i++){
//     cout<<"\n enter arr["<<i<<"] : ";
//     cin>>arr[i];
// }
// cout<<"\n"<<addition(arr,l);
// return 0;
// }
// int addition(int* ptr,int length){
//     int sum=0;
//     for(int i=0;i<length;i++){
//         sum+=(*(ptr+i));
//     }
//     return sum;
// }


// int main(){
//     int arr[3][3]={{10,20,30},{40,50,60},{70,51,45}};
//     cout<<"\n"<<arr;
//     cout<<"\n"<<arr[0];
//     cout<<"\n"<<&arr[0][0];
//     cout<<"\n"<<(arr+1);
//     cout<<"\n"<<*(arr+0);
//     cout<<"\n"<<*(arr+1);
//     cout<<"\n"<<**(arr+0);
//     cout<<"\n"<<*(arr+0);




// }


// int main (){
//     int arr[3][3][3]={{{10,32,30},{10,20,30},{40,51,61}},
//                       {{10,21,32},{14,12,13},{45,65,32}},
//                       {{12,13,45},{15,45,65},{14,54,52}}};
//         cout<<"\n"<<arr;
//         cout<<"\n"<<arr[0];
//         cout<<"\n"<<arr[0][0];
//         cout<<"\n"<<*(arr+0);
//         cout<<"\n"<<*(*(arr+0));
//         cout<<"\n"<<*(*(arr+0)+0);
//         cout<<"\n"<<*(*(*(arr+0)+0)+0);
//         cout<<"\n"<<*(*(*(arr+2)+0)+2);
//         cout<<"\n"<<*(*(*(arr+1)+1)+1)<<endl;
//         cout<<"\n"<<*(*(*(arr+1)+5)+2)<<endl;

//         cout<<"________________________________________________________"<<endl;
//         cout<<endl;


//         for(int i=0;i<3;i++)
//         {
//             for(int j= 0;j<3;j++)
//             {
//                 for(int k=0;k<3;k++)
//                 {
//                     cout<<*(*(*(arr+i)+j)+k)<<" ";
//                 }
//                 cout<<endl;
//             }
//             cout<<endl;
//             cout<<"__________________________________________"<<endl;

//         }
//         cout<<endl;

//     return 0;
// }






//array of object 
// class product
// {
//     int id;
//     string product_name;
//     float price;

//     public: product()
//     {
//         id=0;
//         product_name="xyz";
//         price= 0.0;
//     }
//     product (int id, string product_name, float price){
//         this->id=id;
//         this->product_name=product_name;
//         this->price = price;
//     }
//     void product_display()
//     {
//         cout<<"product display :"<<endl;
//         cout<<this->id<<endl;
//         cout<<this->product_name<<endl;
//         cout<<this->price<<endl;
//         cout<<"_____________________________________"<<endl;

//     }
// };

// int main(){
//     //int arr[4];
//     product p[4]= {{1,"mouse",200.00},{2,"keyboard",500.0},{3,"moniter",5400.00},{4,"hard disk",8900.00}};
//     for (int i=0;i<4;i++){
//         p[i].product_display();
//     }
//     cout<<"======================================="<<endl;
//     product  *ptr = p;
//     for (int i=0;i<4;i++){
//        product pi = *(ptr+i);
//        pi.product_display();
//     }
//     cout <<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
//     for (int i=0;i<4;i++){
//        product pi = *(p+i);
//        pi.product_display();
//     }


//     return 0;
// }


// class Mathematics
// {
// 	int num1;int num2;
// 	public :Mathematics()// default constructor
// 	{
// 		this->num1=0;
// 		this->num2=0;
// 		cout<<"\n default constructor is calling "<<this<<endl;
// 	} 
// 	Mathematics(int num1,int num2){
// 		this->num1=num1;
// 		this->num2=num2;
// 		cout<<"\n paramitrice  constructor is calling "<<this<<endl;

// 	}
// 	Mathematics ( const Mathematics &m){
// 		this->num1=m.num1;
// 		this->num2=m.num2;
// 		cout<<"\n copy constructor is calling "<<this<<endl;

// 	}
// 	void display(){
// 		cout<<"\n num1 :"<<num1;
// 		cout<<"\n num2 :"<<num2;
// 	}
// 	void sum(Mathematics m1, Mathematics m2){
// 		Mathematics m3;
// 		m3.num1=m1.num1+m2.num1;
// 		m3.num2=m1.num1+m2.num2;
// 		m3.diaplay();
// 	}
// 	~Mathematics(){
// 		cout<<"\n destructor is calling "<<this<<endl;

// 	}
// };
// int main(){
// 	Mathematics arr[2];
// 	Mathematics arr1[2]={{11,22},{35,64}};
// 	Mathematics arr2(arr1[0]);
// 	arr2.display();
// 	arr3.sum(arr)

// 	return 0;
// }


// class Base 
// {
//     public: Base()
// {
//     cout<<"\n base function is calling ";

// }
// void check()
// {
//     cout<<"\n check function function is called ";
// }
// };
// class Derived:public Base
// {
//     public:Derived()
// {
//     cout<<"\n Derived class constructor is calling ";

// }
// void check()
// {
//     cout<<"\n check function is called by ";
// }
// };
// int main ()
// {
//     Base b= Derived();
//     b.check();
//     Derived d;
//     d.check();
//     return 0;
// }

//friend function 

// class Marks
// {
//     int maths,phy,chem;
//     public:
//     Marks()
//     {
//         maths=0;
//         phy=0;
//         chem=0;

//         cout<<"default constructor is calling";
//     }
//     Marks(int maths, int phy ,int chem)
//     {
//         this-> maths=maths;
//         this->phy=phy;
//         this->chem=chem;
//     }
//     void display()
//     {
//         cout<<"maths"<<maths<<endl;
//         cout<<"phy"<<phy<<endl;
//         cout<<"chem"<<chem<<endl;
//     }
// friend void update(Marks &);
// friend void persentage(Marks &);
// friend void Second :: update(Marks &);
// };
// class Second
// {
// public:
// void update(Marks &p)
// {
//     p.chem=95;
//     p.maths=56;
//     p.phy=89;
// void display()
// {
//     cout<<"maths"<<maths<<endl;
//     cout<<"phy"<<phy<<endl;
//     cout<<"chem"<<chem<<endl;
// }
// }
// }
// void update(Marks &m1)
// {
//     m1.maths=25;
//     m1.phy=89;
//     m1.chem=50;
// }
// void persentage(Marks &m2)
// {
//     cout<<((m2.chem+m2.phy+m2.maths)/3)<<endl;
// }
// int main ()
// {
//     Marks m1(87,98,46);
//     m1.display();
//     update(m1);
//     m1.display();
//     cout<<"adresss="<<&m1<<endl;
//     persentage(m1);
//     Second s1;
//     s1.update(m1);
//     s1.display();
//     return 0;
// }


// operator overloding 

// class Complex
// {
//     int real,img;
//     public:
//     void get()
//     {
//         cout<<"\nenter real and img number "<<endl;
//         cin>>real>>img;
//     }
//      void set(){
//         cout<<"\n"<<real<<" + "<<img <<"i";
//     }
//     Complex operator+ (Complex w)
//     {
//         Complex w1;
//         w1.real=this->real+ w.real;
//         w1.img=this->img+ w.img;
//         return w1;
//     }
//     Complex operator<< (Complex &c)
//     {
//         c.real=c.real-this->real;
//         c.img=c.img-this->img;
//         return c;
//     }
//     friend Complex operator>> (Complex &, Complex&);
    
// };
// Complex operator>>(Complex &c,Complex &w)
// {
//     c.real=c.real+w.real;
//     c.img=c.img+w.img;
//     return c;
// }

// int main ()
// {
//     Complex c1,c2,c3 ,c4,c5;
//     c1.get();
//     c1.set();
//     c2.get();
//     c2.set();
//     c3=c1+c2;
//     c3.set();
//     c4=c1<<c2;
//     c4.set();
//     c5=c1>>c2;
//     c5.set();
//     return 0;
// }

// class Complex
// {
//     int real,img;
//     public:
//     Complex()
//     {
//         this->real=0;
//         this->img=0;
    
//     }
//     Complex(int real, int img)
//     {
//         this->real=real;
//         this->img=img;
//     }
//     void dis_com()
//     {
//         cout<<"\n"<<real<<"+"<<img<<"i";

//     }
//     Complex operator+ (Complex *ptr)
//     {
//         int sum_real=0, sum_img=0;
//         for (int i=0;i<3;i++)
//         {
//             sum_real+=(ptr+i)->real;
//             sum_img+=(ptr+i)->img;
//         }
//         Complex z;
//         z.real=this->*real+sum_real;
//         z.img=this->*(img)+sum_img;  

//         return z; 
//     }
// };

// int main ()
// {
//     Complex c1[3]={{23,45},{67,89},{90,12}};
//     Complex c2(56,67);
//     Complex c3=c2+c1;
//     c3.dis_com();

//     return 0;

// }

// int mian ()
// {
//     int si;
//     //int *start;
//     int node_data[si]={};
//     int* node_address[si]={};
//     cout<<"\n enter size of linklist :"<<endl;
//     cin>>si;
//     for(int i=0; i<si;i++){
//         cout<<"\n enter data for node:"<<i;
//         cin>>node_data[i];
//         if (i==(si-1))
//             node_address[i]=NULL;
//         else
//             node_address[i]=(node_data+1);

//         // node_address[i]=&node_address[i+1]
//     }
//     for(int i=0; i<si;i++)
//     {
//         cout<<"\n"<<node_address[i]<<" "<<node_data[i]<<endl;

//     }
//     return 0;
// }


class Node
{
    public:
    int node_data;
    int *node_address;

    public:
    Node()
    {
        node_data=0;
        node_address=NULL;

    }
    // Node(int node_data,int *node_address)
    // {
    //     this->node_address=node_address;
    //     this->node_data=node_data;
    // }
    void display()
    {
        cout<<node_address<<"\t"<<node_data<<endl;
    }
    };
int main()
{
    Node ln[4];
    int *start;
    start=(ln+0)->node_address;
    for (int i=0; i<4;i++)
    {
        cout<<"\n enter data of node :"<<i<<" : "<<endl;
        cin>>ln[i].node_data;
        ln[i].node_address=ln[i+1].node_address;

        if(i==3)
        {
            ln[i].node_address=NULL;

        }
        else
            {
                ln[i].node_address=ln[i+1].node_address;
            }
    }

    return 0;
}