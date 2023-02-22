#include<stdio.h>
int main(){
    int mark;
    printf("Enter your exam sub mark's: ");
    scanf("%d",&mark);

    if(mark>=40 & mark<=44){
        printf("Grade is: 'D' ");
    }
    else if(mark>=45 & mark<=49){
        printf("Grade is: 'C' ");
    }
    else if(mark>=50 & mark<=54){
        printf("Grade is: 'C+' ");
    }
    else if(mark>=55 & mark<=59){
        printf("Grade is: 'B-' ");
    }
    else if(mark>=60 & mark<=64){
        printf("Grade  is: 'B' ");
    }
    else if(mark>=65 & mark<=69){
        printf("Grade is: 'B+' ");
    }
    else if(mark>=70 & mark<=74){
        printf("Grade is: 'A-' ");
    }
    else if(mark>=75 & mark<=79){
        printf("Grade is: 'A' ");
    }
    else if(mark>=80 & mark<=100){
        printf("Grade is: 'A+'");
    }
    else if(marks>100)
   {
     printf("\nPlease Enter marks between 0 to 100\n");
   }
    else{
        printf("You are 'Failed'");
    }
    return 0;
}
