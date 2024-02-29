#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std ;
int porownanie=0;

int RandomArray(int tab[], int n){
	srand(time(0));
	for (int i=0; i < n; i++)
	tab[i] = rand() % 100; 
	return 0;
}

int Print(int tab[], int n){
	for (int i=0; i < n; i++)
	cout<<tab[i]<<" ";
	cout<<endl;
 	return 0;
}


int QuickSort (int T[],int l, int p){
	int i,j, x;

	i=l;
	j=p;
	//
	x=T[(l+p)/2];
	do{
	    while(T[i]<x){
	    i++;
	    porownanie++;
	    }
	    porownanie++;
	    while(T[j]>x){
	    j--;
	    porownanie++;
	    }
	    porownanie++;
	    if(i<=j){
	    swap(T[i],T[j]);
	    i++;
	    j--;
	        
	    }
	}
while(i<j);
if(l<j)QuickSort(T,l,j);
if(i<p)QuickSort(T,i,p);

}

int main ( ) {
	const int N=100;	
	int A[N];
	setlocale(LC_CTYPE, "Polish");
	

	RandomArray(A,N);
	cout << "Tablica na wejœciu: " << endl;
	Print(A, N);
	QuickSort(A, 0, N-1);
	cout << "Tablica posortowana: " << endl;
	Print(A,N);
	cout << "Liczba porównan: " << porownanie;

	return 0;
}
 
