#include <stdio.h>
#include <string.h>

#define maxcourse 10
#define maxstudent 10

typedef struct 
{
    char courseCode[10],courseName[50];
    int credits;
} Course;

typedef struct 
{
    char studentID[10],name[50];
    Course registeredCourses[maxcourse];
    int courseCount;
} Student;

Course courses[maxcourse];
Student students[maxstudent];
int courseCount=0,studentCount=0,i,j;

void addCourse() 
{
    printf("Enter Course Code: ");
    scanf("%s", courses[courseCount].courseCode);
    printf("Enter Course Name: ");
    scanf(" %[^\n]", courses[courseCount].courseName);
    printf("Enter Credits: ");
    scanf("%d", &courses[courseCount].credits);
    courseCount++;
    printf("Course added successfully.\n");
}

void addStudent() 
{
    printf("Enter Student ID: ");
    scanf("%s", students[studentCount].studentID);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", students[studentCount].name);
    students[studentCount].courseCount = 0;
    studentCount++;
    printf("Student added successfully.\n");
}

int findCourseIndex(const char *courseCode) 
{
    for (i=0;i<courseCount;i++) 
	{
        if (strcmp(courses[i].courseCode, courseCode) == 0) 
        return i;
    }
    return -1;
}

int findStudentIndex(const char *studentID) 
{
    for (i=0;i<studentCount;i++) 
	{
        if (strcmp(students[i].studentID, studentID) == 0) 
        return i;
    }
    return -1;
}

void registerCourse() 
{
    char studentID[10], courseCode[10];
    printf("Enter Student ID: ");
    scanf("%s", studentID);

    int studentIndex = findStudentIndex(studentID);
    if (studentIndex == -1) 
    {
        printf("Student ID not found.\n");
        return;
    }

    printf("Enter Course Code to Register: ");
    scanf("%s", courseCode);

    int courseIndex = findCourseIndex(courseCode);
    if (courseIndex == -1) 
    {
        printf("Course Code not found.\n");
        return;
    }

    for (i=0;i<students[studentIndex].courseCount;i++) 
    {
        if (strcmp(students[studentIndex].registeredCourses[i].courseCode, courseCode) == 0) 
        {
            printf("Course already registered by the student.\n");
            return;
        }
    }

    students[studentIndex].registeredCourses[students[studentIndex].courseCount] = courses[courseIndex];
    students[studentIndex].courseCount++;
    printf("Course registered successfully.\n");
}

void displayStudentCourses() 
{
    char studentID[10];
    printf("Enter Student ID: ");
    scanf("%s", studentID);

    int studentIndex = findStudentIndex(studentID);
    if (studentIndex==-1) 
	{
        printf("Student not found.\n");
        return;
    }

    printf("Courses registered by %s:\n", students[studentIndex].name);
    printf("Course Code\t Course Name\t Credits\n");
    for (i=0;i<students[studentIndex].courseCount;i++) 
	{
        Course c = students[studentIndex].registeredCourses[i];
        printf("%-12s\t %-30s \t%d\n", c.courseCode, c.courseName, c.credits);
    }
}

void saveData() 
{
    FILE *file = fopen("registration_data.txt", "w");
    if (!file) 
	{
        printf("Error saving data.\n");
        return;
    }

    fprintf(file, "%d\n", courseCount);
    for (i=0;i<courseCount;i++) 
	{
        fprintf(file, "%s\n%s\n%d\n", courses[i].courseCode, courses[i].courseName, courses[i].credits);
    }

    fprintf(file, "%d\n", studentCount);
    for (i=0;i<studentCount;i++) 
	{
        fprintf(file, "%s\n%s\n%d\n", students[i].studentID, students[i].name, students[i].courseCount);

        for (j=0;j<students[i].courseCount;j++) 
		{
            fprintf(file, "%s\n%s\n%d\n", students[i].registeredCourses[j].courseCode, students[i].registeredCourses[j].courseName, students[i].registeredCourses[j].credits);
        }
    }

    fclose(file);
    printf("Data saved successfully.\n");
}

void loadData() 
{
    FILE *file = fopen("registration_data.txt", "r");
    
    fscanf(file, "%d\n", &courseCount);
    for (i=0;i<courseCount;i++) 
	{
        fscanf(file, "%s\n", courses[i].courseCode);
        fscanf(file, " %[^\n]\n", courses[i].courseName);
        fscanf(file, "%d\n", &courses[i].credits);
    }

    fscanf(file, "%d\n", &studentCount);
    for (i = 0; i < studentCount; i++) 
	{
        fscanf(file, "%s\n", students[i].studentID);
        fscanf(file, " %[^\n]\n", students[i].name);
        fscanf(file, "%d\n", &students[i].courseCount);

        for (j = 0; j < students[i].courseCount; j++) 
		{
            fscanf(file, "%s\n", students[i].registeredCourses[j].courseCode);
            fscanf(file, " %[^\n]\n", students[i].registeredCourses[j].courseName);
            fscanf(file, "%d\n", &students[i].registeredCourses[j].credits);
        }
    }

    fclose(file);
    printf("Data loaded successfully.\n");
}

int main() 
{
    int choice;
    while (1) 
	{
        printf("\n===== Course Registration System =====\n");
        printf("1. Add New Course\n");
        printf("2. Add New Student\n");
        printf("3. Register Course for Student\n");
        printf("4. Display Student's Registered Courses\n");
        printf("5. Save Data\n");
        printf("6. Load Data\n");
        printf("7. Exit\n");
        printf("Select an option (1-7): ");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1: addCourse(); break;
            case 2: addStudent(); break;
            case 3: registerCourse(); break;
            case 4: displayStudentCourses(); break;
            case 5: saveData(); break;
            case 6: loadData(); break;
            case 7: printf("Exiting the program. Goodbye!\n"); return 0;
        }
    }
}
