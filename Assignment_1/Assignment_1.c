#include<stdio.h>
struct Date{
       int day;
       int month;
       int year;
};

void initDate(struct Date* ptrDate){
       ptrDate->day=9;
       ptrDate->month=10;
       ptrDate->year=2002;
       printf("Initilial Date is 9-10-2002");
}
void printDate(struct Date* ptrDate){
   printf("Entered Date is %d - %d - %d",ptrDate->day,ptrDate->month,ptrDate->year);

};
void acceptDateFromConsole(struct Date* ptrDate){

       printf("Enter date : ");
       scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}; 
 
int main(){
struct Date mydate;
int choice;

do{
       printf("Enter 1 to see date :\n");
       printf("Enter 2 to enter date : \n");
       printf("Enter 3 to see entered date: \n ");
       printf("Enter 4 to exit\n");
       printf("Enter choice : \n");
       scanf("%d",&choice);

              switch(choice){
                            case 1:
                                   initDate(&mydate);
                                   break;

                            case 2:
                                   acceptDateFromConsole(&mydate);
                                   break;

                            case 3:
                                   printDate(&mydate);
                                   break;

                            case 4:
                                    printf("Exit");
                                    break;

                            default:
                                    printf("Enter valid date ");
                                    break;
                            }      

       }while(choice !=4);
  
   return 0;

}