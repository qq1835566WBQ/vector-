//#include<iostream>
//#include<vector>
//using namespace std;
//
////���캯��ԭ��
////1��vector<T> v;                            ������ģ��ʵ�֣�Ĭ�Ϲ��캯��
////2��vector<v.begin(),v.end());				 ��v[begin(),end())�����Ԫ�ؿ���������
////3��vector��n,elem);						 ���캯����n��elem������������дelem����Ĭ��Ϊ0
////4��vector<const vector &vec);				 �������캯��		
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