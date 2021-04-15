#include "operations.h"
#include<stdio.h>
#include<math.h>

/* Valid operations */
enum operations{ Total_ser=1, Total_par, Cal_res, Res_val , Unit_con};

/* Display the menu of operations supported */
void calculator_menu(void);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Circuit Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Total Series Resistance\n"
            "2. Total Parallel Resistance\n"
            "3. Resistance value based on voltage and current\n"
            "4. Resistance value based on color code\n"
            "5. Unit conversion\n"
            "6. Exit");
    printf("\n\n\tEnter your choice\n\n");
   
    int calculator_operation;
    float r1,r2,r3;
    scanf("%d", &calculator_operation);

    if(6 == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if((calculator_operation != 1)&&(calculator_operation != 2)&&(calculator_operation !=3)&&(calculator_operation !=4)&&(calculator_operation !=5))
   {
       printf("\n\t---Wrong choice---\n\tEnter valid choice\n");
      return;
   }
    switch(calculator_operation)
    {
        case Total_ser:

            printf("Enter the value of 3 resistors in ohms\n");
            printf("Note:-If less than 3 resistors, fill zero\n");
            scanf("%f%f%f",&r1,&r2,&r3);
            printf("\nTotal series resistance = %f ohms\n", total_ser(r1,r2,r3));
            break;

        case Total_par:

            printf("Enter the value of 3 resistors in ohms\n");
            scanf("%f%f%f",&r1,&r2,&r3);
            printf("\nTotal parallel resistance = %f ohms\n", total_par(r1,r2,r3));
            break;

        case Cal_res:

            printf("Enter the value of voltage and current in volts and ampere respectively\n");
            float v,amp;
            scanf("%f%f",&v,&amp);
            if(amp==0)
            printf("Invalid input:ampere");
            else
            printf("\nResistance = %f ohms\n", cal_res(v,amp));
            break;

        case Res_val:

        L2:    printf("\nEnter the 5-character color description of the resistor:\n\n ");
            printf("0 = black\n"
            "1 = brown\n"
            "2 = red\n"
            "3 = orange\n"
            "4 = yellow\n"
            "5 = green\n"
            "6 = blue\n"
            "7 = violet\n"
            "8 = grey\n"
            "9 = white\n"
            "10 = gold\n"
            "11 = silver\n\n");
    
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if((e!=10)&&(e!=11))
    {printf("\nInvalid Input\n");
    goto L2;}
    if((a==10)||(a==11)||(b==10)||(b==11)||(c==10)||(c==11)||(d==8)||(d==9))
    {printf("\nInvalid Input\n");
    goto L2;}
    if(e==10)
    printf("Resistor value = %d +/- %d %% ohm\n",res_val(a,b,c,d),e-5);
    if(e==11)
    printf("Resistor value = %d +/- %d %% ohm\n",res_val(a,b,c,d),e-1);
            break;
           
        case 5:

            printf("\nAvailable Operations\n");
        L1:  printf("\n1. Kohm--->ohm\n"
            "2. ohm--->Kohm\n"
            "3. Mohm--->ohm\n"
            "4. ohm--->Mohm\n"
            );
            printf("\n\tEnter your choice\n\n"); 
            int i;
            scanf("%d",&i);
            if((i!= 1)&&(i!=2)&&(i!=3)&&(i!=4))
            {printf("\n\t---Wrong choice---\n\tEnter valid choice\n");
             goto L1;}
            float val;
            if(i==1)
            {
                printf("Enter the value in kohm\n");
                scanf("%f",&val);
                printf("\n%f Kohm = %lf ohm\n", val,unit_conv1(val));
                break;}
            if(i==2)
            {
                printf("Enter the value in ohm\n");
                scanf("%f",&val);
                printf("\n%f ohm = %lf Kohm\n",val,unit_conv2(val));
                break;}
            if(i==3)
            {
                printf("Enter the value in Mohm\n");
                scanf("%f",&val);
                printf("\n%f Mohm = %lf ohm\n",val,unit_conv3(val));
                break;}
            if(i==4)
            {
                printf("Enter the value in ohm\n");
                scanf("%f",&val);
                printf("\n%f ohm = %lf Mohm\n",val,unit_conv4(val));
            break;}

    }
}