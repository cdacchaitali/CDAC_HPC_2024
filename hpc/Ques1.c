//Abstract : Arithmetric Progression
#include <stdio.h>

int main() {
    int firstTerm, commonDiff, numTerms, i;

    printf("Enter the first term of the arithmetic progression: ");
    scanf("%d", &firstTerm);

    printf("Enter the common difference: ");
    scanf("%d", &commonDiff);

    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);

    printf("Arithmetic Progression: ");
    for (i = 1; i <= numTerms; i++) {
        printf("%d ", firstTerm + (i - 1) * commonDiff);
    }
    printf("\n");

    return 0;
}

