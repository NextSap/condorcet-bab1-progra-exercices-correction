#include <stdio.h>

int main(void) {
    double angle1;
    double angle2;
    double angle3;

    printf("Entrez angle1 : ");
    scanf("%lf", &angle1);
    printf("Entrez angle2 : ");
    scanf("%lf", &angle2);
    printf("Entrez angle3 : ");
    scanf("%lf", &angle3);

    if(angle1 + angle2 + angle3 != 180) {
        printf("[ERREUR] Le triangle n'est pas correct");
    } else if(angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {
        printf("[ERREUR] Le triangle n'est pas correct");
    } else {
        if(angle1 < 90 && angle2 < 90 && angle3 < 90) {
            printf("Triangle aigu");
        } else if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            printf("Triangle droit");
        } else if (angle1 >= 90 || angle2 >= 90 || angle3 >= 90) {
            printf("Triangle obtu");
        }
    }

    return 0;
}
