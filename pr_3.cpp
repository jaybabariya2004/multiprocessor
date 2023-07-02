#include<iostream>

using namespace std;

class child{
	
	public:
		void print(){
			
			cout<<"Child Function"<<endl;
		}
};
class parent:class child{
	
	public:
		void print(){
			
			cout<<"Parent Function"<<endl;
		}
};
int main(){
	
	parent parent1,parent2;
	
	parent1.print();
	
	parent2.child::print();
	
	return 0;
}
