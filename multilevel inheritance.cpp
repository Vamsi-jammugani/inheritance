#include<iostream>
class base
{
	public:
		void a()
		{
			std::cout<<"a";
		}
};
class derived1:public base
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};
class derived2:public derived1
{
	public:
		void c()
		{
			std::cout<<"c";
		}
};
int main()
{
derived2 obj;
obj.c();
obj.b();
obj.a();
return 0;
}

