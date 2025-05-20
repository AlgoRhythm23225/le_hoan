#include <stdio.h>
#include <malloc.h>
#include <iostream>

class mang
{
public:
	int* data;
	int size;

	mang(int num_item)
	{
		data = (int*)malloc(num_item * sizeof(int));
		if (data == NULL)
			std::runtime_error("Khong the dung malloc de cap phat vung nho");
		size = num_item;
	}

	int& operator[](int index)
	{
		if (index >= size)
			throw std::runtime_error("Vuot qua so luong phan tu trong mang");
		return data[index];
	}

	void push_back(int val)
	{
		// Cấp phát vùng nhớ mới lớn hơn vùng nhớ cũ
		int* new_temp = (int*)malloc((size + 1) * sizeof(int));
		if (new_temp == NULL)
			throw std::runtime_error("Khong the cap phat vung nho moi");
		// Copy dữ liệu từ vùng nhớ cũ sang vùng nhớ mới và set giá trị của đối tượng cuối cùng
		for (int i = 0; i < size; i++)
		{
			new_temp[i] = data[i];
		}
		new_temp[size] = val;
		// Hủy vùng nhớ cũ
		free(data);
		// Cập nhật địa chỉ của vùng nhớ mới vào con trỏ data
		data = new_temp;
		// Cập nhật lại giá trị của biến size
		size++;
	}

	~mang()
	{
		free(data);
	}
};

int sum_arr(mang& a)
{
	int sum = 0;
	for (int i = 0; i < a.size; i++)
	{
		sum += a[i];
	}
	return sum;
}



void main()
{
	mang a(3);

	try
	{
		a[0] = 2;
		a[1] = 5;
		a[2] = 3;
		a.push_back(4);
		printf("Sum array: %d", sum_arr(a));
	}
	catch (std::exception e)
	{
		printf("Something went wrong (%s)\n",e.what());
	}

	
}
