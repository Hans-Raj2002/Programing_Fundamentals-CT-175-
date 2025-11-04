#include<stdio.h>

int main()
{
   int a,b;
   printf("Select your department\n");
   printf("1. CSIT\n");
   printf("2. EE\n");
   printf("Enter your selection\n");
   scanf("%d",&a);

   switch(a)
{
    case 1:
    printf("You selected CSIT.\n");
    printf("Choose your specialization\n");
    printf("1. BSCS\n");
    printf("2. BSDS\n");
    printf("3. BSCR\n");
    printf("4. BSAI\n");

    printf("Enter your choice\n");
    scanf("%d",&b);

    switch(b)
{
       case 1:
       printf("Your subdepartment is Computer Science");
       break;
       case 2:
       printf("Your subdepartment is Data Science");
       break;
       case 3:
       printf("Your subdepartment is Cyber Security");
       break;
       case 4:
       printf("Your subdepartment is Artificial Intelligence");
       break;
       default:
       printf("Invalid Entry");
       break;
    }
    break;
    case 2:
    printf("Your department is Electrical Engineering");
    break;
    default:
    printf("Invalid input");
   }
return 0;
}

