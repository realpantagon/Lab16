#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int *shuff[]={a,b,c,d};
	int mem;
	
	int ran = rand()%4;
	
	for(int i = 3 ; i >= 0; i--){
		mem = *shuff[ran];
		*shuff[ran] = *shuff[i];
		*shuff[i] = mem;
	}
}