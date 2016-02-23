#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

enum cons {MAX_VALUE = 1000};

int a[3000][3000];
int b[3000][3000];

int main()
{

	int n;
	int m;
	int p;
	int x;
	int y;
	int val;

	srand (time(NULL));
	fstream f;
	f.open("input.in", ios::out);

	cin >> n;
	cin >> m;
	cin >> p;
	
	f << n << " " << m << endl;
	f << m << " " << p << endl;
	f << endl;

	for (int i = 0; i < (n + m) / 2; i++) {
		x = rand() % n;
		y = rand() % m;
		val = rand() % MAX_VALUE;
		a[x][y] = val;
	}

	for (int i = 0; i < (m + p) / 2 ; i++) {
		x = rand() % n;
		y = rand() % m;
		val = rand() % MAX_VALUE;
		b[x][y] = val;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			f << a[i][j] << " "; 
		}
		f << endl;
	}

	f << endl;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < p; j++) {
			f << b[i][j] << " "; 
		}
		f << endl;
	}



	
}



