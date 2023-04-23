#include <stdio.h>

int main() {
	int max, e, m, s, sn5=0, sn0=0;
	float n5, n0;
	printf("Enter max marks : ");
	scanf("%d",&max);
	n0 = 0.9*max;
	n5 = 0.95*max;

	for ( int i = 1; i <= 10; i++){
		printf("Enter marks of English, Maths and Science of student %d : ", i);
		scanf("%d%d%d",&e,&m,&s);
		if ( e >= n5 && m >= n5 && s >= n5){
			sn5 += 1;
		}
		else if ( e >= n0 && m >= n0 && s >= n0){
			sn0 += 1;
		}
	}
	printf("Number of students, who secured 95%% or more in all the subjects : %d\n", sn5);
	printf("Number of students, who secured 90%% or more in all the subjects : %d\n", sn0);
}
