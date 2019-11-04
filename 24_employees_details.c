include <stdio.h>
 
/*structure declaration*/
struct employee{
    char    name[20];
    int     empId;
    float   salary;
};
 
int main()
{
    /*declare structure variable*/
    struct employee emp;
     
    /*read employee details*/
    printf("\nEnter details :\n");
    printf("Name ?:");          gets(emp.name);
    printf("ID ?:");            scanf("%d",&emp.empId);
    printf("Salary ?:");        scanf("%f",&emp.salary);
     
    /*print employee details*/
    printf("\nEntered detail is:");
    printf("Name: %s"   ,emp.name);
    printf("Id: %d"     ,emp.empId);
    printf("Salary: %f\n",emp.salary);
    return 0;
}

Output:

Enter details :
Name ?:Alakhdeep
ID ?:1921123
Salary ?:100.0000

Entered detail is:Name: alakhdeepId: 1921123Salary: 100.0000
