class Solution {
public:
	int reinitializePermutation(int n)
	{
		vector<int>arr(n);
		for (int i = 0; i < n; i++)
			arr[i] = i;
		bool judge = true;
		int ans = 0;
		while (judge)
		{
			bool tempjudge = false;
			for (int i = 0; i < n; i++)
			{
				int temp;
				if (i % 2 == 0)
				{
					temp = arr[i / 2];
					if (temp != arr[i])
						tempjudge = true;
					arr[i] = temp;
				}
				else    if (i % 2 == 1)
				{
					temp = arr[n / 2 + (i - 1) / 2];
					if (temp != arr[i])
						tempjudge = true;
					arr[i] = temp;
				}
			}
			judge = tempjudge;
			ans++;
		}
		return ans;
	}
};