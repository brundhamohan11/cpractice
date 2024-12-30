QUESTION:

In your college, next week there is an on-campus drive happening for your seniors. The company has asked for the short-listed students names. The following are their criteria to become eligible for the campus interview.

Students with 0 arrears and with 7.0 and above 7.0 CGPA
Students with 1 or 2 arrears and with 7.5 and above 7.5 CPGA
So your placement officer wants to shortlist the student names for the interview. As you are good at programming, he wants you to help him shortlist the student names. Help him by solving the program and display “Eligible to attend placement” or “Not Eligible to attend placement”.



  
 #include<stdio.h>
int main(){
    char name[100]; 
    int reg_no;     
    float cgpa;    
    int arrears;    
    scanf("%s", name);
    scanf("%d", &reg_no);
    scanf("%f", &cgpa);
    scanf("%d", &arrears);
    if ((arrears == 0 && cgpa >= 7.0) || (arrears == 1 || arrears == 2) && cgpa >= 7.5)
    {
        printf("%s\n", name);
        printf("%d\n", reg_no);
        printf("Eligible to attend placement\n");
    } else {
        printf("%s\n", name);
        printf("%d\n", reg_no);
        printf("Not Eligible to attend placement\n");
    }

    return 0;
}
