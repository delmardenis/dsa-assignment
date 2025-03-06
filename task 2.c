#include <stdio.h>

int main() {
    int n, x;
    char animal[20];

    printf("Enter number of domestic animals: ");
    scanf("%d", &n);

    printf("Enter domestic animals:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", animal);
        printf("%s ", animal);
    }

    printf("\n");

    printf("Enter number of wild animals: ");
    scanf("%d", &x);

    printf("Enter wild animals:\n");
    for (int i = 0; i < x; i++) {
        scanf("%s", animal);
        printf("%s ", animal);
    }

    return 0;
}





