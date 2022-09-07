#include<iostream>
class base1
{
	public:
		void a()
		{
			std::cout<<"a";
		}
};
class base2
{
	public:
		void b()
		{
			std::cout<<"b";
		}
};
class derived:public base1,public base2
{
	public:
		
			void c()
			{
				std::cout<<"c";
			}
		};
int main()
{
	derived obj;
	obj.c();
	obj.a();
	obj.b();
	return 0;
	}
