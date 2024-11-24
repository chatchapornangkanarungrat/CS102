#include <stdio.h>
#include <string.h>

#define maxstruct 100

struct regist {
    int id;
    char name[51];
    int age;
    float income;
};

void registerperson (struct regist person[], int *count);
void display (struct regist person[], int count);


int main() 
{
    struct regist person[maxstruct];
    int count = 0;
    int choice;

    while (1) 
	{
        printf("Poverty Registration System\n");
        printf("1. Register New Person\n");
        printf("2. Display All Registered Persons\n");
        printf("3. Exit\n==\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
		{
            case 1:
                registerperson(person, &count);
                break;
            case 2:
                display(person, count);
                break;
            case 3:
                printf("Exiting program.\n");
                return 0;
        }
    }

    return 0;
}




void registerperson(struct regist person[], int *count) 
{
    struct regist newperson;
    printf("Enter ID: ");
    scanf("%d", &newperson.id);
    printf("Enter Name: ");
    scanf(" %[^\n]", newperson.name);
    printf("Enter Age: ");
    scanf("%d", &newperson.age);
    printf("Enter Monthly Income: ");
    scanf("%f", &newperson.income);

    person[*count] = newperson;
    (*count)++;
    printf("Person registered successfully.\n==\n");
}




void display (struct regist person[], int count) 
{
	int i;
    if (count == 0) 
	{
        printf("No registered persons to display.\n==\n");
        return;
    }

    printf("ID\tName\t\tAge\tMonthly Income\n");
    for (i=0;i<count;i++) 
        printf("%d \t%s \t%d \t%.2f\n", person[i].id, person[i].name, person[i].age, person[i].income);
}
