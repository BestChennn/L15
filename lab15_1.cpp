#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
for(int i=1;i<=N-1;i++){
		T temp = d[i];
		int sA = i-1;
		while(sA >= 0 and temp >d[sA]){
				d[sA+1] = d[sA];
				sA--;
		}
	
		d[sA+1] = temp ;
		cout<<"Pass "<< i <<":";
		for(int j=0;j<N;j++){
			cout<<d[j]<<" ";
		}
		cout<<"\n";
	}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}



