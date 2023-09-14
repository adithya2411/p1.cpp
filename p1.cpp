#include<iostream>
#include<vector>
using namespace std;
 
class Complex{
      private:
            int real;
            int imaginary;
      public:
          Complex(){
                 cout<<"Construct called\n";
          }
          Complex(int r,int i){
                real=r;
                imaginary=i;
          }
          //addition function
          void addition(Complex c1, Complex c2){
               cout<<"After summation of two complex numbers , the result is :"<<(c1.real+c2.real)<<"+ i"<<(c1.imaginary+c2.imaginary)<<endl;
          }
          //subtraction function
          void subraction(Complex c1,Complex c2){
               cout<<"After summation of two complex numbers , the result is :"<<(c1.real-c2.real)<<"+ i"<<(c1.imaginary+c2.imaginary)<<endl;
          }
          //multiplicaton function
          void multiplication(Complex c1,Complex c2){
               cout<<"After multiplicaton of two complex numbers , the result is :"<<(c1.real * c2.real)<<"+ i"<<(c1.imaginary+c2.imaginary)<<endl;
          }
          
};

int main(){
       vector<int>r(2);
       vector<int>im(2);
       for(int i=1;i<=2;i++){
             cout<<"Enter real part of complex no. "<<i<<endl;
             cin>>r[i-1];
             cout<<"Enter imaginary part of complex no. "<<i<<endl;
             cin>>im[i-1];
       }
       Complex c1(r[0],im[0]);
       Complex c2(r[1],im[1]);
       
       c1.addition(c1,c2);
       c1.subraction(c1,c2);
       c1.multiplication(c1,c2);
       
       return 0;
}
       
       
       




















