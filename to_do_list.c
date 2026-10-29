#include<stdio.h>

int main(){
    char tasks[10][50];
    int choice, count = 0,i;

    do{
        printf("=====TO-DO LIST=====\n");
        printf("1. ADD TASKS\n");
        printf("2. VIEW TASKS\n");
        printf("3. EXIT\n");

        printf("enter choice: \n");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            if(count < 10){
            printf("Enter task: ");
            scanf("%49s", tasks[count]);
            count++;
            printf("task added!\n");
            }
            else{
                printf("Task list is full!\n");
            }
            break;

            case 2:
            printf("\n Your Task: \n");
            for(int i= 0;i <count;i++ ){
                printf("%d, %s \n, i + 1, tasks[i]");
            }
            break;

            case 3:
            printf("Goodbye!\n");
            break;

            default:
            printf("Invalid choice \n");
        }
    }while(choice != 3);

    return 0;
}