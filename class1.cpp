#include <iostream>
using namespace std;


class Test{
private:
	int a;
	int b;		
public:
	Test(int aa){
		a = aa;
	}
	int get_constractor() { return a; }
};
int main()
{
	Test t1(12);
	cout << t1.get_constractor() << endl;	

	return 0;
}
