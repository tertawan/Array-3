#include <stdio.h>
#include <string.h>
int main(){
    int num[3][4][2];
    char fac[5][20];
    
    for(int i = 0; i < 5 ;i++){
            printf("Faculty : ");
            scanf("%s",&fac[i]);
            if (strcmp(fac[i],"Exit") == 0 || strcmp(fac[i], "exit") == 0) {
                break;
            }
        for (int j = 0; j < 4; j++) {
            printf("Grade %d\n",j+1);
            for (int k = 0; k < 3; k++) {
                printf("Course %d Quantity Of Student : ",k+1);
                scanf("%d",&num[i][j][k]);
            }
        }
    }
    
}
