#include<iostream>
using namespace std;
void print(void* ptr, char type);
int main() {
	int n = 2;
	print(&n, 'i');
	return 0;
}

void print(void* ptr, char type) {
	switch (type) {
	case 'i': 
		cout<<*((int*)ptr)<<endl;
		break;
	}

}