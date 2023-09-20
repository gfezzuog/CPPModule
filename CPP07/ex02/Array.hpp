
#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <string>
#include <cctype>
#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
	unsigned int size;
	T*	array;

public:
	Array():size(0), array(new T[0]){};
	Array(unsigned int n) : size(n), array(new T[n]){};
	Array(const Array& arr)
	{
		this->array = new T[arr.size];
		this->size = arr.size;
		for (unsigned int x = 0; x < arr.size; x++)
			this->array[x] = arr.array[x];
	}
	//	Array(const Array& arr)
//	{
//		*this = arr;
//	}
	~Array()
	{
		delete[] this->array;
	}

	Array& operator=(const Array& arr)
	{
		if (this != &arr)
		{
			this->~Array();
			this->size = arr.size;
			this->array = new T[arr.size];
			for (unsigned int x = 0; x < arr.size; x++)
				this->array[x] = arr.array[x];
		}
		return *this;
	}
//	Array& operator=(const Array& arr)
//	{
//		if(this->array)
//		{
//			std::cout<<"pogging"<<std::endl;
//			delete[] this->array;
//		}
//		this->array = arr.array;
//		this->size = arr.size;
//		return *this;
//	}

	T& operator[](unsigned int i)
	{
		if (i >= this->size)
			throw OutOfRangeException();
		return this->array[i];
	}

	unsigned int getSize()
	{
		return this->size;
	}

	class OutOfRangeException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("Element is out of range of array");
		}
	};

};

#endif
