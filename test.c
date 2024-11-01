#include <stdio.h>


int simple_operations(int NOTES[7]) {
	 int note, N, i, max = 0, min = 0;
	 float avg = 0.0 ;
	 
	 printf("Entrez le nombre d'étudiants : ");
    	 scanf("%d", &N);
	 int POINTS[N];

	 
	 for (i = 0; i < N; i++){
	 	printf("Entrez la note de l'étudiant n°%d: ", i + 1);
	 	scanf("%d", &POINTS[i]);
	 	avg += POINTS[i];
	 	
	 	if (i==0) { //Gérer la première itération
	 		min = POINTS[i];
	 	}
	 	
	 	if (max < POINTS[i]) {
	 		max = POINTS[i];
	 	}
	 	else if (POINTS[i] < min)  {
	 		min = POINTS[i];
	 	}
	 	if (POINTS[i] == 60) {
		    NOTES[6]++;
		} else if (POINTS[i] >= 50 && POINTS[i] <= 59) {
		    NOTES[5]++;
		} else if (POINTS[i] >= 40 && POINTS[i] <= 49) {
		    NOTES[4]++;
		} else if (POINTS[i] >= 30 && POINTS[i] <= 39) {
		    NOTES[3]++;
		} else if (POINTS[i] >= 20 && POINTS[i] <= 29) {
		    NOTES[2]++;
		} else if (POINTS[i] >= 10 && POINTS[i] <= 19) {
		    NOTES[1]++;
		} else if (POINTS[i] >= 0 && POINTS[i] <= 9) {
		    NOTES[0]++;
		}
	 } 
	 printf("La moyenne est de : %.2f \n", avg / N);
	 printf("La note la plus haute est : %d \n", max);
	 printf("La note la plus basse est : %d \n", min);
	 printf("nombre de notes entre 0 et 9 : %d \n\n", NOTES[0]);
}

int graphique_nuage(int NOTES[7]) {
	int max = 0;
	for (int j=0; j < 7; j++) {
		printf("nombre dans le tableau[%d] est : %d \n", j + 1, NOTES[j]);
		if (NOTES[j] > max) {
			max = NOTES[j];
		}
	}
	printf("%d : \n\n", max);
	
	for (max; max >= 0 ; max--) {
		printf("%d : ", max);
		for (int i=0; i < 7; i++) {
			if (NOTES[i] == max) {
				printf(" ---O--- ");
			}
			else {
				printf("-----------/");
			}
		}
	}


}

int main (){
	int NOTES[7] = {0};
	simple_operations(NOTES);
	graphique_nuage(NOTES);
    return 0;
}
