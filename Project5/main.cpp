#include<iostream>

#include <string>
using namespace std;

class Cat
{
public:
	int GetAge();
	void SetAge(int);
	Cat();
	Cat(int Age, int Weight);

private:
	int itsAge;
	int itsWeight;
};

Cat::Cat()
{
	itsAge = 1;
	itsWeight = 10;
}

Cat::Cat(int Age, int Weight)
{
	this->itsAge = Age;
	this->itsWeight = Weight;
}

void Cat::SetAge(int Age)
{
	itsAge = Age;
}

int Cat::GetAge()
{
	return itsAge;
}

void fun(Cat& rCat);
int main()
{
	int varOne;
	int * pNum = &varOne;
	string t = "dfdfdf";
	Cat* pCat= new Cat;
	

	cout << pCat->GetAge() << endl;
	cout<<t.length()<<endl;
	cout << t.at(3)<<endl;

	varOne = 6;
	*pNum = 7;
	return 0;
}

void fun(Cat& rCat)
{
	cout << "Change age" << endl;
	rCat.SetAge(6);
	cout << &rCat << endl;
}