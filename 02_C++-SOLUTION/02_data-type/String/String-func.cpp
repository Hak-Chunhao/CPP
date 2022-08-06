#include <iostream>
#include <string>
using namespace std;
int main() {
//	func-part-1
	string name = "cristiano ronaldo";
	string newName = name.replace(0,9,"CRISTIANO");
	cout<<newName<<endl;
	
//	
	name = "cristiano ronaldo";
	name.erase(0,1);
	name.insert(0,"C");
	name.erase(10,1);
	name.insert(10,"R");
	cout<<name<<endl;
//	
	name.insert(9,",");
	cout<<name<<endl;
	
		
	

	/*
	string greeting = "hello";
	greeting.insert(3," ");
	greeting.erase(3,1);
	cout<<greeting<<endl;
	*/

return 0;
}
	
 
	
	
	
	

		








