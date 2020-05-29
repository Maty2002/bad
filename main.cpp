#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class example{
	public:
		example(int num);
};
example::example(int num){
	cout<<num;
}
int main(int argc, char** argv) {
	int num=9;
	example ex(int num);
	return 0;
}
