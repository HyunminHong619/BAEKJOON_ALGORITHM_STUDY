#include <iostream>
#include <algorithm>


using namespace std;

int A[100000];
int M[100000];

int BiSearch(int* arr,int leng,int target){
	int left=0,right=leng-1;

	int leftV=arr[0],rightV=arr[leng-1];
	while(left <= right)
	{
		int mid = (left+right)/2;
		int midV=arr[(left+right)/2];
		
		if(midV == target)
		{
			return 1;
		}
		else if(midV > target)
		{
			right = mid -1;
		}
		else
		{
			left =mid+1;
		}
	}
	return 0;
}
int main(void){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> A[i];

	int m;
	cin >> m;
	for(int i=0;i<m;i++)
		cin >>M[i];

	sort(A,A+n);

	for(int i=0;i<m;i++){
		cout << BiSearch(A,n,M[i])<<'\n';
	}

	return 0;
}	
