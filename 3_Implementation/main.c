#include "parking.h"
int not=0,noc=0,nor=0,nob=0,amount=0,count=0;
// not=number of truck/car/rikshaw/bike

void truck()
{
    printf("\n Entry Successful");
    not++;
    amount=amount+200;
    count++;
}

void car()
{
    printf("\nEntry Successful");
    noc++;
    amount=amount+100;
    count++;
}

void rikshaw()
{
    printf("\nEntry Successful");
    nor++;
    amount=amount+70;
    count++;
}

void bike()
{
    printf("\nEntry Successful");
    nob++;
    amount=amount+50;
    count++;
}

void status()
{
    printf("\nNumber of Bus/Truck=%d",not);
    printf("\nNumber of car/Jeep=%d",noc);
    printf("\nNumber of rikshaw=%d",nor);
    printf("\nNumber of bike=%d",nob);
    printf("\nTotal Number of vehicles=%d",count);
    printf("\nTotal amount=%d",amount);

}

void clear()
{
    not=0;
    noc=0;
    nor=0;
    nob=0;
    amount=0;
    count=0;
    printf("\nData cleared Successfully");
}

int menu()
{
    int ch;
    printf("\n\n\n 1.Enter bus/truck");
    printf("\n 2.Enter car/jeep");
    printf("\n 3.Enter rikshaw");
    printf("\n 4.Enter bike");
    printf("\n 5.check status");
    printf("\n 6.clear data");
    printf("\n 7.exit");
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
    return(ch);
}

