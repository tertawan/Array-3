#include <stdio.h>
#include <string.h>
int main(){
    int num[5][4][3];
    int count = 0;
    char fac[5][20];
    
    for(int i = 0; i < 5 ;i++){
            printf("Faculty : ");
            scanf("%s",&fac[i]);
            if (strcmp(fac[i],"Exit") == 0 || strcmp(fac[i], "exit") == 0) {
                break;
            }else{
                count++;
            }
        for (int j = 0; j < 4; j++) {
            printf("Grade %d\n",j+1);
            for (int k = 0; k < 3; k++) {
                printf("Course %d Quantity Of Student : ",k+1);
                scanf("%d",&num[i][j][k]);
            }
        }
    }
    // show

    for (int i = 0; i < 3; i++) {
        printf("Course %d\n",i+1);
        for (int j = 0; j < count; j++) {
            printf("%s\n",fac[j]);
            for (int k = 0; k < 1; k++) {
                printf("%d  %d  %d  %d\n",num[j][0][i],num[j][1][i],num[j][2][i],num[j][3][i]);
            }
        }
    }
    
}
