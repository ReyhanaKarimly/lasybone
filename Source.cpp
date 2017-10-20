#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

	int k, n, a, b;

	cin >> k;


	for (int i = 0; i<k; i++)
	{

		cin >> n;
		vector<int>A(32);
		for (int j = 0; j<n; j++)
		{
			cin >> a >> b;


			for (int t = a; t <= b; t++)
			{
				A[t]++;
			}


		}
		sort(A.rbegin(), A.rend());
		if (A[0]<n)
			cout << "NO" << endl;
		else cout << "YES" << endl;
	}

	return 0;
}