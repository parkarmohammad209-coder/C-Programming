#include <stdio.h>

struct emp {
    /*
    Name:Mohammed.Dilawar.Parkar
    CLASS:- COMPS F.Y. DIVISION:- C-2
    UIN:- 251P043
    */
    int id;
    char name[50];
    float salary;
};

int main() {
    struct emp e;
    FILE *f;
    int n;

    f = fopen("emp.txt", "w");

    printf("How many employees? ");
    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        printf("\nEnter ID: ");
        scanf("%d", &e.id);
        printf("Enter Name: ");
        scanf("%s", e.name);
        printf("Enter Salary: ");
        scanf("%f", &e.salary);

        fprintf(f, "%d %s %.2f\n", e.id, e.name, e.salary);
    }

    fclose(f);

    printf("\nData Saved in emp.txt");
    return 0;
}
