#pragma once
#define MAX 5
#include <iostream>


using namespace std;

template <typename Type> class Array
{
private:
	Type Arr[MAX];
public:	
	Array();
	~Array();
	void SetArr(Type*a);
	Type Contrlsum();//(Type* a);
	Type GetArr(int);
};


template<class Type> Array<Type>::Array()
{
}

template<class Type> Array<Type>::~Array()
{
}

template<class Type> void Array<Type>::SetArr(Type * a)
{
	for (int i = 0; i < MAX; i++)
	{
		Arr[i] = a[i];
	}
}

template <class Type> Type Array<Type>::Contrlsum()//(Type * a)
{
	Type sum=0;
	for (int i = 0; i < MAX; i++)
	{
		sum += Arr[i];
	}
	return sum;
}

template <class Type> Type Array<Type>::GetArr(int index)
{
	return this->Arr[index];
}


