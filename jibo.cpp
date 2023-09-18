#include<bits/stdc++.h>

const int maxn = 1e5 + 20;
int n , a[maxn];

void bubble()
{
	for( int i = 1 ; i <= n ; ++i )
		for( int j = 1 ; j <= n ; ++j )
			if( a[j] > a[j + 1] )
				std::swap( a[j] , a[j + 1] );
	return 0;
}

int main()
{
	srand( time( nullptr ) );
	scanf( "%d" , &n );
	for( int i = 1 ; i <= n ; ++i )
		a[i] = rand();
	t1 = clock();
	sort( a + 1 , a + n + 1 )
	return 0;
}
