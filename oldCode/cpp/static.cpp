#include<iostream>
using namespace std;

class Singleton
{
private:
	static Singleton* single;
	int i;
public:
	//static Singleton * single;
	static Singleton* instance()
	{

	if(single == NULL)
		single = new Singleton;
	return single;

	}
	void set (int j){i = j;};
	int get() {cout << "this is value:"<< i << endl;}
	~Singleton() {delete Singleton::single;}
};

Singleton* Singleton:: single = NULL;

/*Singleton* :: Singleton instance()
{
	if(single == NULL)
		single = new Singleton;
	return single;

}*/

int main()
{
	Singleton* obj = Singleton::instance();
	obj->set(10);
	obj->get();
	Singleton* obj1 = Singleton::instance();
	obj1->set(20);	
	obj1->get();
	obj->get();
	return 0;
}
