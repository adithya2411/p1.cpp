#include <iostream>
using namespace std;
class room{
	private :
		float length;
		float breadth;
		float height;
	public :
		room(float l, float b, float h){
			this->length = l;
			this->breadth = b;
			this->height = h;
			}
		void area(){
			float area = length*breadth;
			cout<<" area = "<<area<<endl;
			}
		void volume(){
			float volume = length*breadth*height;
			cout<<" volume = "<<volume<<endl;
			}
		};
int main(){
	float l,b,h;
	cout<<"enter length = ";
	cin>>l;
	
	cout<<"enter breadth = ";
	cin>>b;
	
	cout<<"enter height = ";
	cin>>h;
	
	room r1(l,b,h);
	r1.area();
	r1.volume();
	
	return 0;
	
	}
			
