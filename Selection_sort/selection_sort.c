#include <stdio.h>

void selection_sort(
	int list[],	// given unsorted data
	int last		// last index
);

int main(){
	int score[12] = {4,21,36,14,62,91,8,22,7,81,77,10};
	int last = 11;

	printf("---Selection sort test---\n");
	selection_sort(score, last);
	for(int iter=0; iter<=last; iter++)
		printf("%d ", score[iter]);
	printf("\n");

	return 0;
}

void selection_sort(int* list, int last){
	int smallest;
	int hold;

	for(int current=0; current<=last; current++){
		smallest = current;

		for(int walker=current+1; walker<=last; walker++){
			if(list[walker] < list[smallest])
				smallest = walker;
		}
			//swap current value with found smallest one
			if(list[smallest] < list[current]){
			hold = list[current];
			list[current] = list[smallest];
			list[smallest] = hold;
		}
	}
}
