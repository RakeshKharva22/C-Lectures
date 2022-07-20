#include<iostream>
using namespace std;

class Jignesh
{
	private:
		
		string tv="watching";
	public:	
	
		friend void Nirav(Jignesh xyz);
		
	
};
	 void Nirav(Jignesh xyz)
		{
			cout<<xyz.tv<<" IPL 2020"<<endl;
		}

int main()
{
	Jignesh obj;
	Nirav(obj);	
	return 0;
}