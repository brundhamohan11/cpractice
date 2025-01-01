QUESTION:
As they are going to conduct symposium next month at your college, they have asked you to prepare a software which helps the other college students to know about the department details. This should display the direction of the department when you give the department name as input. After the students enter the department, they will give the event name in which they are going to participate and it should display the hall details such as event venue.

First, you should welcome the students by displaying “Welcome to AsInTra”
Next, you should ask the student for their department. After getting department details, you should display the direction.
For example, If the department is CSE, enter 1 as input and 2 for ECE and so on.

CSE
ECE
MECH
CIVIL
If the department is CSE, Display “Go Straight”.

If the department is ECE, Display “Go Right”.

If the department is MECH, Display “Go Left”.

If the department is CIVIL, Display “Go Straight and turn Left”.

Next, after the student enters into the department, you should display “Welcome to CSE Department” and so on.
Then you should display the event venue details and ask students for their event details and enter the respective event code. Event(s) code is the serial number of that event.
CSE Events

Coding - Hall S108
Web Designing - Hall S208
Database - Hall S206                                                   
ECE Events

Project Expo - Hall M108
PPT - Hall M208
Circuit Debug - Hall M206
MECH Events

BottleRocketery - Hall N108
PPT - Hall N208
Mad 4 CAD - Hall N206
CIVIL Events

CADD Quest - Hall C108
Brick Bonding - Hall C208 
Model Making - Hall C206
Use Nested switch to solve this. The first switch is used for selecting a department and the second switch is used for selecting event(s).

If the student enters the department code wrongly, display Wrong Input. If the student enters the event code wrongly display No Event exist.





#include<stdio.h>
int main() {
    int departmentCode;
    char eventCode;
    printf("Welcome to AsInTra\n");
    printf("1. CSE\n2. ECE\n3. MECH\n4. CIVIL\n");
    scanf("%d", &departmentCode);
    printf("Enter Department\n");
    switch (departmentCode) {
        case 1: // CSE
            //printf("Enter Department \n");
            printf("Go Straight\n");
            printf("Welcome to CSE Department\n");
            printf("a. Coding\nb. Web Designing\nc. Database\n");
            printf("Enter event\n");
            scanf(" %c", &eventCode); 
            switch (eventCode) {
                case 'a':
                    printf("Go to Hall S108\n");
                    break;
                case 'b':
                    printf("Go to Hall S208\n");
                    break;
                case 'c':
                    printf("Go to Hall S206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        case 2: // ECE
            //printf("Enter Department \n");
            printf("Go Right\n");
            printf("Welcome to ECE Department\n");
            printf("a. Project Expo\nb. PPT\nc. Circuit Debug\n");
            printf("Enter event\n");
            scanf(" %c", &eventCode);
            switch (eventCode) {
                case 'a':
                    printf("Go to Hall M108\n");
                    break;
                case 'b':
                    printf("Go to Hall M208\n");
                    break;
                case 'c':
                    printf("Go to Hall M206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        case 3: // MECH
        //printf("Enter Department \n");
            printf("Go Left\n");
            printf("Welcome to MECH Department\n");
            printf("a. BottleRocketery\nb. PPT\nc. Mad 4 CAD\n");
            printf("Enter event\n");
            scanf(" %c", &eventCode);
            switch (eventCode) {
                case 'a':
                    printf("Go to Hall N108\n");
                    break;
                case 'b':
                    printf("Go to Hall N208\n");
                    break;
                case 'c':
                    printf("Go to Hall N206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        case 4: // CIVIL
            //printf("Enter Department \n");
            printf("Go Straight and turn Left\n");
            printf("Welcome to CIVIL Department\n");
            printf("a. CADD Quest\nb. Brick Bonding\nc. Model Making\n");
            printf("Enter event\n");
            scanf(" %c", &eventCode);
            switch (eventCode) {
                case 'a':
                    printf("Go to Hall C108\n");
                    break;
                case 'b':
                    printf("Go to Hall C208\n");
                    break;
                case 'c':
                    printf("Ho to Hall C206\n");
                    break;
                default:
                    printf("No Event exist\n");
            }
            break;

        default:
            printf("Wrong Input\n");
    }

    return 0;

}
