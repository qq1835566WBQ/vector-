//#include<iostream>
//#include<vector>
//using namespace std;
////vector������swap();
//
////1������ʹ�� v1.swap(v2);Ч��Ϊ����v1��v2�е�����Ԫ�ؽ�����
//
//
////2��ʵ����; ����swap���������ڴ�ռ�
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
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "v1��v2����ǰ" << endl;
//	printfVector(v1);
//	cout << v1.capacity() << "\t" << v1.size() << endl;
//	vector<int> v2;
//	for (int j = 11; j > 0; j--)
//	{
//		v2.push_back(j);
//	}
//	printfVector(v2);
//	cout << v2.capacity() << "\t" << v2.size() << endl;
//	v1.swap(v2);
//	cout << "v1��v2������" << endl;
//	printfVector(v1);
//	cout << v1.capacity() << "\t" << v1.size() << endl;
//	printfVector(v2);
//	cout << v2.capacity() << "\t" << v2.size() << endl;
//}
//
//void test02()
//{
//	vector<int> v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//
//	v.resize(3);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//
//	//����swap���������ڴ�ռ�
//	vector<int>(v).swap(v);
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}