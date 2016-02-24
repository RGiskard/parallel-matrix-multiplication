#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

enum cons {MAX_VALUE = 1000};

int a[1005][1005];
int b[1005][1005];

int main()
{

	int n;
	int m;
	int p;
	int x;
	int y;
	int val;

	int k1;
	int k2;


	srand (time(NULL));
	fstream f;
	f.open("input.in", ios::out);
	cout << "Enter N, M and P" << endl;

	cin >> n;
	cin >> m;
	cin >> p;
	f << n << " " << m << " " << p << endl;
	f << endl;
	
	k1 = (n + m) / 2;
	k2 = (m + p) / 2;

	f << k1 << " " << k2 << endl << endl;;

	for (int i = 0; i < k1; i++) {
		x = rand() % n;
		y = rand() % m;
		val = rand() % MAX_VALUE;
		if(!a[x][y])
			f << x << " " << y << " " << val << endl;
		a[x][y] = 1;

	}

	for (int i = 0; i <  k2 ; i++) {
		x = rand() % n;
		y = rand() % m;
		val = rand() % MAX_VALUE;
		if(!b[x][y])
			f << x << " " << y << " " << val << endl;
		b[x][y] = 1;

	}

	
}



