//#include<iostream>
//#include<vector>
//using namespace std;
////vector��ֵ����
////1��vector& operator=��const vector &vec);    ���صȺ������
////2��assign(begin(),end());                    ��[begin(),end())�����Ԫ�ؿ�����ֵ������
////3��assign(n,elem);							   ��n��elemֵ��ֵ������
//
//void printfVector(vector<int>& vec)
//{
//	for (auto it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << "\t";
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printfVector(v1);
//
//	vector<int> v2;
//	v2 = v1;
//	printfVector(v2);
//	vector<int>v3;
//	v3.assign(v2.begin(), v2.end());
//	printfVector(v3);
//	vector<int> v4;
//	v4.assign(10, 1);
//	printfVector(v4);
//	
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
