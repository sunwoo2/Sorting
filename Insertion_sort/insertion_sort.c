#include <stdio.h>

void insertion_sort(int list[], int last);

int main(){
	int score[12] = {4,21,36,14,62,91,8,22,7,81,77,10};
	int last = 11;

	printf("---Insertion sort test---\n");
	insertion_sort(score, last);
	for(int iter=0; iter<=last; iter++)
		printf("%d ", score[iter]);
	printf("\n");

	return 0;
}

void insertion_sort(int* list, int last){
	int walker;
	int hold;

	for(int current=1; current<=last; current++){
		hold = list[current];
		walker = current-1;

		while(walker>=0 && hold<list[walker]){
			list[walker+1] = list[walker];
			walker--;
		}

//		for(walker=current-1; walker>=0 && hold<list[walker]; walker--)
//			list[walker+1] = list[walker];

		list[walker+1] = hold;
	}
}
