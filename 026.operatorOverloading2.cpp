#include <iostream>

using namespace std;

class complex{
  int real;
  int img;
  public:
  
  complex(int r,int i){
      real =r;
      img = i;
  }

  friend complex operator+(complex c1,complex c2);
  friend ostream& operator<<(ostream&,complex);
 
};

ostream& operator<<(ostream &o,complex obj){
    cout<<obj.real<<" + "<<obj.img<<"i\n";
}

complex operator+(complex c1,complex c2){
    complex temp(0,0);
    temp.real = c1.real+c2.real;
    temp.img = c1.img+c2.img;
    return temp;
  }

int main(){
    complex c1(2,4);
    complex c2(3,5);
    complex c3(0,0) ;
    c3 = c1+c2;
    
    cout<<c1;
    cout<<c2;
    cout<<c3;
    return 0;
}
