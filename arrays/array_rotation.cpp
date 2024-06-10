#include <iostream>
using namespace std;

void reverse(int* arr, int start, int end)
{
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	

}

int main() {
	int num;
	cin >> num;  
	int n, k;
	int* list;
	while (num--)
	{
		cin >> n >> k;
		list = new int[n];
		for (int j = 0; j < n; j++)
		{
			cin >> list[j];

		}

		// rotate array using longer method
		// for (int r = 0; r < k; r++)
		// {
		// 	int last = list[n-1];
		// 	for (int m =n-1; m > 0; m--)
		// 	{
		// 		list[m] = list[m-1];
				
		// 	}
		// 	list[0] = last;
		// }

		// reversing array method
		reverse(list, 0, n-1);
		reverse(list, 0, ((k%n)-1));
		reverse(list, (k %n), n-1);



		for (int p = 0; p < n; p++)
		{
			cout << list[p] << " ";
		}
		cout << endl;
		
	}
	return 0;
}

