//#include<iostream>
//#include<vector>
//using namespace std;
//
////构造函数原型
////1、vector<T> v;                            采用类模板实现，默认构造函数
////2、vector<v.begin(),v.end());				 将v[begin(),end())区间的元素拷贝给本身
////3、vector（n,elem);						 构造函数将n个elem拷贝给本身，不写elem，则默认为0
////4、vector<const vector &vec);				 拷贝构造函数		
//
//
//void printfVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "\t" ;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 5; i++)
//	{
//		v1.push_back(i);
//		//v1[i] = i;
//	}
//	printfVector(v1);
//	vector<int> v2(v1.begin(), v1.end());
//	printfVector(v2);
//	vector<int> v3(v2);
//	printfVector(v3);
//	vector<int> v4(5, 0);
//	printfVector(v4);
//	vector<int> v5(5);
//	printfVector(v5);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}