#include <iostream>
#include <queue>
#include<string>
#include<list>
#include<assert.h>
using namespace std;
int main01()
{
	//push   pop    front    ;
	queue<string, list<string>>q1;
	q1.push("Hai_dian District.");
	cout << "\"Hai_dian District.\" are pushed into queue" << endl;
	q1.push("Chao_yang District.");
	cout << "\"Chao_yang District.\" are pushed into queue" << endl;
	q1.push("Xuan_wu District.");
	cout << "\"Xuan_wu District.\" are pushed into queue" << endl; 
	q1.push("Xi_cheng District.");
	cout << "\"Xi_cheng District.\" are pushed into queue" << endl;
	
	cout << q1.size() << endl;
	cout << q1.front() << endl;
	cout << "The Elements are poped form the stack by order." << endl;
	while (q1.size())
	{
		cout << " " << q1.front() << endl;
		q1.pop();
	}
	system("pause");
	return 0;
}