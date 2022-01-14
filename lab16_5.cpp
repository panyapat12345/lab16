#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;	
}

void shuffle(int *w,int *x, int *y, int *z){
	int data[] = {*w, *x, *y, *z};
	int n = sizeof(data)/sizeof(data[0]);
	int r1, r2;

	for(int i = 0; i < n+10; i++){
		r1 = rand()%4;
		r2 = rand()%4;
		swap(data[r1], data[r2]);
	}

	*w = data[0];
	*x = data[1];
	*y = data[2];
	*z = data[3];
}
