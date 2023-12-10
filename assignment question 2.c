#include<stdio.h>
#include<stdlib.h>
struct FUNCTIONS
{
    char stud_name[20],address[30];
};
typedef struct FUNCTIONS data;
void display(data d)
{
    printf("Student name-%s",d.stud_name);
    printf("\nAddress - %s\n",d.address);
}
data input()
{
    data d;
    printf("Enter student name-");
    scanf("%s",&d.stud_name);
    fflush(stdin);
    printf("Enter address-");
    scanf("%[^\n]s",&d.address);
    return d;
}
data sort( data *d, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        for(i=0;i<n-1;i++)
        {
            if(d[i].stud_name[0]>d[i+1].stud_name[0])
            {
                data dt;
                dt=d[i];
                d[i]=d[i+1];
                d[i+1]=dt;
            }
        }
    }
}
int main()
{
    int n,i;
    printf("Enter number of students-");
    scanf("%d",&n);
    data d[n];
    for(i=0;i<n;i++)
    {
        d[i]=input();
    }
    sort(d,n);
    system("cls");
    printf("Student Details (Sorted by Name)\n");
    for(i=0;i<n;i++)
    {
        printf("Student %d\n",i+1);
        display(d[i]);
    }
}