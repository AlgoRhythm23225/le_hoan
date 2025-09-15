#include <iostream>

using namespace std;
class Mang 
{
public:
	int* data;
	int size;
	int cap;

	Mang(int num_item) : data(new int[num_item]), size(num_item), cap(num_item) 
	{
		if (data == NULL)
			throw runtime_error("Khong the cap phat vung nho moi");
	}

	int& operator[](int index)
	{
		if (index < 0 || index >= size)
			throw runtime_error("Vuot qua so luong phan tu");
		return data[index];
	}

	void grow()
	{
		int new_cap = (cap == 0 ? 1 : cap * 2);
		if (new_cap == NULL)
			throw runtime_error("Khong the cap phat vung nho moi");
		int* nd = new int[new_cap];
		for (int i = 0; i < size; i++)
		{
			nd[i] = data[i];
		}
		delete[] data;
		data = nd;
		cap = new_cap;
	}

	void push_back(int val)
	{
		if (size == cap) grow();
		data[size++] = val;
	}

	~Mang()
	{
		delete[] data;
	}
};

int main()
{
	Mang a(3);
	a[0] = 4;
	a[1] = 3;
	a[2] = 8;
	try
	{
		a[3] = 8;
	} 
	catch (const exception& e)
	{
		cout << "Loi: " << e.what() << endl;
	}
	cout << "a[2] = " << a[2] << endl;
	a.push_back(10);
	cout << "a[3] = " << a[3] << endl;
}