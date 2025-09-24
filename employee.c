 #include <stdio.h>
struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};
void inputEmployee(struct Employee *emp) {
    printf("Enter employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter employee name: ");
    fgets(emp->name, sizeof(emp->name), stdin);
    size_t len = strlen(emp->name);
    if (len > 0 && emp->name[len-1] == '\n') {
        emp->name[len-1] = '\0';
    }

    printf("Enter employee age: ");
    scanf("%d", &emp->age);

    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);
}
void displayEmployee(struct Employee emp) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary);
}

int main() {
    struct Employee emp;

    inputEmployee(&emp);
    displayEmployee(emp);

    return 0;
}

