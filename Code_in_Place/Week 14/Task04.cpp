#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
    char department[50];
};

int main() {
    struct Employee employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);

        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);

        printf("ID: ");
        scanf("%d", &employees[i].id);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);


        printf("Department: ");
        fgets(employees[i].department, sizeof(employees[i].department), stdin);

    }

    int maxIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (employees[i].salary > employees[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("Employee with highest salary:\n");
    printf("Name: %s\n", employees[maxIndex].name);
    printf("ID: %d\n", employees[maxIndex].id);
    printf("Salary: %.2f\n", employees[maxIndex].salary);
    printf("Department: %s\n", employees[maxIndex].department);

f    return 0;
}

