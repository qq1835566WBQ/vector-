//#include<iostream>
//#include<vector>
//using namespace std;
////vector�����ɾ��
////1��push_back(elem);					��β������Ԫ��elem
////2��pop_back();							ɾ��β�����һ��Ԫ��
////3��insert(const_iterator pos,elem);		������ָ��λ�ò���Ԫ��elem
////4��insert(const_iterator pos,int count,elem) ������ָ��λ�ò���count��Ԫ��elem
////5��erase(const_iterator pos)					ɾ��������ָ��λ��Ԫ��
////6��erase��const_iterator start, const_iterator end) ɾ������vector�����е�Ԫ�أ�ʹ���Ϊ������
////7��clear();								ɾ�������е�����Ԫ�ء�
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
//	cout << "β����֮ǰ������v1�е�Ԫ�أ�";
//	printfVector(v1);
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "β����֮�������v1�е�Ԫ�أ�";
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