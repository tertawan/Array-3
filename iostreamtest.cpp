
#include<stdio.h>
#include<string.h>
int main(){
    
    char month[30];
    float max,min,avg;
    int i = 0;
    float num1,num2,num3,num4;
    
    FILE *pt;
    
    pt = fopen("/Users/tawannedsuwan/desktop/NewKK.txt","w");
    
    if(pt != NULL )
    {
        printf("Open file success!!\n\n");
        
        do{
            printf("======================================\n\n");
            printf("Enter month : ");
            scanf("%s",month);
            
            if(strcmp(month,"Exit")== 0 )
                break;//Exit
            
            printf("Enter north : ");
            scanf("%f",&num1);
            printf("Enter central : ");
            scanf("%f",&num2);
            printf("Enter South : ");
            scanf("%f",&num3);
            printf("Enter Esad : ");
            scanf("%f",&num4);
            
            i = i + 1;
            
            fprintf(pt,"\n%d : %s  %.2f  %.2f  %.2f  %.2f",i,month,num1,num2,num3,num4);
            
        }while(strcmp(month,"Exit")!= 0);
        
        fclose(pt);
    }else{
        printf("Cannot open file !!!");
    }
}
