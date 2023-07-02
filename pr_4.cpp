#include<iostream>

using namespace std;

class number{
	
	private:
		int n;
		
		public:
			void getnumber(int x){
				n = x;
			}
			
			void dispnumber(void){
				cout<<"There are Value of n =>"<<n;
			}
			void operator++(void){
				n = ++n;
			}
			void operator--(void){
				n = --n;
			}
};
int main(){
	
	number obj;
	obj.getnumber(10);
	
	++obj;
	
	obj.dispnumber();
	cout<<endl;
	
	--obj;
	
	obj.dispnumber();
	cout<<endl;
	
	return 0;
}
