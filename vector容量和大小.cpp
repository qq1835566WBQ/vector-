//#include<iostream>
//#include<vector>
//using namespace std;
////vector容量和大小
////1、empty()									判断vector容器是否为空，返回值为bool类型；
////2、capacity()								vector容器的容量
////3、size()									返回vector容器的大小，及vector容器中元素的个数
////4、resize(int num)		!!!容量不变，大小变为num!!!					重新指定vector容器的大小长度为num，若容器大小变长，则以默认值填充新位置；若容器大小变短，则末尾超出容器长度的元素被删除。
////5、resize(int num,elem)   		!!!容量不变，大小变为num!!!			重新制定vector容器的大小长度为num，若容器大小变长，则以elem值填充新位置；若容器大小变短，则末尾超出容器长度的元素被删除。
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
//		cout << "v1非空" << endl;
//	}
//	else
//	{
//		cout << "v1为空" << endl;
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