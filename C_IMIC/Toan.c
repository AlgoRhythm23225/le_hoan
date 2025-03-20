int cong(int x, int y)
{
	return x + y;
}

int nhan(int x, int y)
{
	int ket_qua = 0;
	for (int i = 0; i < y; i++)
	{
		ket_qua = cong(ket_qua, x);
	}
	return ket_qua;
}