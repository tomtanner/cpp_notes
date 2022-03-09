//using one conventional stack and one system stack
#include <iostream>
#include <stack>
using namespace std;
class queue{
	stack<int>s1;
	public:
	void push(int x)
	{
		s1.push(x);
	}
	int pop()
	{
		if(s1.empty())
		{
			cout<<"Queue is empty"<<endl;
			return -1;
		}
		int res=s1.top();
		s1.pop();
        if(s1.empty())
		return res;
		int item=pop();
		s.push(res);
		return item;
	}
}
int main()
{
	return 0;
}