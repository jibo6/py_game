#include"jiboxu.h" 

using namespace jiboxu;

int n , a[maxn];

int main()
{
	srand( time( nullptr ) );
	cin >> n;
	for( int i = 1 ; i <= n ; ++i )
		a[i] = rand();
	bubble( a , n );
	return 0;
}
