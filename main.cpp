#include <iostream>

using namespace std;

int main()
{
	char Buffer[1024] = { 0, };
	
	cin >> Buffer;

	int Size = strlen(Buffer);//int Size = 0;
	char* Array = new char[Size+1];
	for (int i = 0; i < 1024; ++i)
	{
		if (Buffer[i] == '\0')
		{
			Size = i + 1;
		}
	}

	for (int i = 0; i < Size; ++i)
	{
		Array[i] = Buffer[i];
	}

	cout << Array << endl;

	//int Size = 10;
	//int* Array = new int[Size]; 

	//*Array = 1; //ù��° ĭ�� 1�� �ְڴ�.
	//*(Array+1) = 2; 

	/*
	for(int i =0 ; i<Size; i++)
	{
		Array[i] = i +1;
	}
	*/

	//cout << Array << endl;
	//cout << (Array + 1) << endl;
	//cout << Array[0] << endl;//���� ���ٰ� ����.  
	//cout << Array[1] << endl; 

	//cout << *(Array + 1) << endl;

	//
	delete[] Array;


	return 0;
}