#include<iostream>
#include<fstream>

using namespace std;

int main (){
    string name;
    ifstream sin("sahil.txt");
    getline(sin,name);
    cout<<name;

    sin.close();

  
}