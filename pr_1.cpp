#include<iostream>

using namespace std;

class messag{
	
	private:
		char name[20];
		
		public:
			messag(char a[]){
				
				strcpy(name,a);
				
			}
			void print(){
				cout<<"Your Name :";
			}
			void print(char lastname[]){
				cout<<name<<" "<<lastname<<endl;
			}
};
int main(){
	
	messag obj("Jay");
	
	obj.print();
	obj.print("Babariya");
	
	return 0;
}
