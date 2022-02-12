#include "mutantstack.hpp"

int main(void)
{
	Mutantstack<int> mstack; //돌연변이 stack생성
	mstack.push(5);			 //첫번째 요소
	mstack.push(17);		 //두번째 요소
	mstack.push(3);
	mstack.push(10);
	mstack.push(737);
	mstack.push(1);
	std::cout << "<basic function test>" << std::endl;			   //마지막 요소
	std::cout << "size of stack : " << mstack.size() << std::endl; // stack size는 6

	Mutantstack<int>::iterator it = mstack.begin(); //제일 첫번째로 push된 요소(bottom)
	Mutantstack<int>::iterator ite = mstack.end();	//제일 마지막으로 push된 요소(top)

	std::cout << "first : " << *it << std::endl;				 // 5
	std::cout << "top of stack : " << mstack.top() << std::endl; // 1
	std::cout << "last : " << *(ite - 1) << std::endl;			 // 1
	std::cout << std::endl;

	std::cout << "<operaotr test>" << std::endl;
	++it;
	std::cout << "second : " << *it << std::endl; // 17
	--it;
	std::cout << "first : " << *it << std::endl; // 5
	std::cout << (it == it) << std::endl;		 // true
	std::cout << (it != ite) << std::endl;		 // true
	std::cout << (it < ite) << std::endl;		 // true
	std::cout << (it > ite) << std::endl;		 // false

	std::cout << std::endl;
	std::cout << "<values of stack>" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl; //첫번째 요소부터 마지막 요소까지 출력
		++it;
	}
	std::cout << std::endl;
	std::cout << "<stack copy test>" << std::endl;

	std::stack<int> s(mstack);
	int *begin = &s.top() - (s.size() - 1);
	int *end = &s.top() + 1;
	while (begin != end)
	{
		std::cout << *begin << std::endl; // mstack과 동일한 요소 출력
		begin++;
	}
}