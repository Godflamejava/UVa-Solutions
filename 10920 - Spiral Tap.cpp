#include <iostream>

using namespace std;

int main(){
	
	long N, k;
	long row, col;
	long ring, actual;

	while(cin>>N>>k and N and k){

		row = (N+1)/2;
		col = (N+1)/2;

		ring=1;

		while((ring*ring)<k){
			ring+=2;
			row++;
			col++;
		}
		actual = ring*ring;

		for(int i=0; i<ring-1 and actual!= k; row--, actual--, i++){}

		for(int i=0; i<ring-1 and actual!= k; col--, actual--, i++){}

		for(int i=0; i<ring-1 and actual!= k; row++, actual--, i++){}

		for(int i=0; i<ring-1 and actual!= k; col++, actual--, i++){}

		cout<<"Line = "<<row<<", column = "<<col<<".\n";


	}

	return 0;
}