#include<iostream>
using namespace std;
class Mathematical{
	
	virtual void calculate() = 0;
	
};

class mathematical : public Mathematical{
	
	public:
		
	float area_of_circle, area_of_triangle, area_of_rectangle, r=5, pi=3.14, h=5, b=10, w=5, l=5;  
		
		void calculate(){
		
			
	        area_of_circle = pi * r * r;
	        area_of_triangle = h * b / 2;
                area_of_rectangle = w * l;
            
			cout<<area_of_circle<<endl<<area_of_triangle<<endl<<area_of_rectangle;
			
		}+
};

int main(){
	
      mathematical obj;
      obj.calculate();

}
