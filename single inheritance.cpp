#include<iostream>
class base
{
	public:
		void a()
		{
			std::cout<<"a";
		}
};
class derived:public base
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};
int main()
{
	derived obj;
	obj.b();
	obj.a();
	return 0;
}
