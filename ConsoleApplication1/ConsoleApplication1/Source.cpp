//��������ʽʵ�ָ߾�����������
//Դ���뽫��github�Ͽ��� �����CBYstudio
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cout << "������һ��������";
	cin >> n;
	int cn;
	vector<int> a(1, 1);
	for (int lm = 1; lm <= n; lm++)
	{
		for (int m = 0; m <= a.size() - 1; m++)
		{
			a[m] = a[m] * lm;
			cn = a.size() - 2;
			if (a.back() != 0 || a[cn] != 0)
			{
				a.push_back(0);
				a.push_back(0);
				a.push_back(0);
			}
			if (m >= 1 && a[m - 1] >= 10)
			{
				a[m] += (a[m - 1] - a[m - 1] % 10) / 10;
				a[m - 1] -= a[m - 1] - a[m - 1] % 10;
			}
		}
	}
	while (a.back() == 0) a.pop_back();
	cout << n << "!=";
	for (int i = a.size() - 1; i >= 0; i--)
		cout << a[i];
	cout << endl;
	cout << "λ��Ϊ" << a.size() << endl;
	system("pause");
	return 0;
}
