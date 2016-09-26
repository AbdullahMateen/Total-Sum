#include <iostream>
using namespace std;
main()
{
	int array[20];

	for( int i=0; i<20; i++ )
	{
		cout << "Enter Number " << i+1 << ": ";
		cin >> array[i];
	}	
	int ans = array[0];

	for( int j=0; j<20; j++ )
	{
		if( ans < array[j] )
		{
			ans = array[j];
		}
	}
	cout << endl << endl;
	cout << "Heighest Number is :" << ans << endl;

	for( int j=0; j<20; j++ )
	{
		if( ans > array[j] )
		{
			ans = array[j];
		}
	}
	cout << endl ;
	cout << "Lowest Number is :" << ans << endl;
	
	ans = 0;
	for( int j=0; j<20; j++ )
	{
		ans = array[j] + ans;
	}
	cout << endl ;
	cout << "Total Sum is:" << ans << endl;
}
