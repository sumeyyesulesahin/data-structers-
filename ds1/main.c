#include <stdio.h>
#include <stdlib.h>
 struct patient{
     int age;
     char name[20];
     int height;
     struct patient *next;
 };



    main(){
      struct patient *head=(struct patient*)malloc(sizeof(struct patient));
      head->age=45;
      head->next=NULL;

        head->next=(struct patient*)malloc(sizeof(struct patient));
        head->next->age=33;
        head->next->next=NULL;


        print("first patient's age  is %d",head->age);
        printf("second patient's age is %d,"head->next->age);











    }
