//#include<iostream>
//#include<vector>
//using namespace std;
////vector�����ʹ�С
////1��empty()									�ж�vector�����Ƿ�Ϊ�գ�����ֵΪbool���ͣ�
////2��capacity()								vector����������
////3��size()									����vector�����Ĵ�С����vector������Ԫ�صĸ���
////4��resize(int num)		!!!�������䣬��С��Ϊnum!!!					����ָ��vector�����Ĵ�С����Ϊnum����������С�䳤������Ĭ��ֵ�����λ�ã���������С��̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
////5��resize(int num,elem)   		!!!�������䣬��С��Ϊnum!!!			�����ƶ�vector�����Ĵ�С����Ϊnum����������С�䳤������elemֵ�����λ�ã���������С��̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//
//void printfVector(vector<int>& vec)
//{
//	for (auto it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfVector(v1);
//	if (v1.empty())
//	{
//		cout << "v1�ǿ�" << endl;
//	}
//	else
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	v1.resize(5,1);
//	cout << v1.capacity() << endl;
//	cout << v1.size() << endl;
//	printfVector(v1);
//	v1.resize(15, 10);
//	cout << v1.capacity() << endl;
//	printfVector(v1);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}