//#include<iostream>
//#include<vector>
//using namespace std;
////vector插入和删除
////1、push_back(elem);					从尾部插入元素elem
////2、pop_back();							删除尾部最后一个元素
////3、insert(const_iterator pos,elem);		迭代器指定位置插入元素elem
////4、insert(const_iterator pos,int count,elem) 迭代器指定位置插入count个元素elem
////5、erase(const_iterator pos)					删除迭代器指定位置元素
////6、erase（const_iterator start, const_iterator end) 删除整个vector容器中的元素，使其变为空容器
////7、clear();								删除容器中的所有元素。
//
//void printfVector(vector<int>& vec)
//{
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	cout << "尾插入之前的容器v1中的元素：";
//	printfVector(v1);
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "尾插入之后的容器v1中的元素：";
//	printfVector(v1);
//	v1.pop_back();
//	printfVector(v1);
//	v1.insert(v1.begin(), 100);
//	v1.insert(v1.begin(), 4, 100);
//	v1.erase(v1.begin());
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();
//
//	printfVector(v1);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}