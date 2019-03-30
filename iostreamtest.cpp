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
    for (int i = 0; i < count; i++) {
        printf("%s      G1  G2  G3  G4\n",fac[i]);
        for (int k = 0; k < 3; k++) {
            printf("Course %d : ",k+1);
            printf("%d  %d  %d  %d\n",num[i][0][k],num[i][1][k],num[i][2][k],num[i][3][k]);
                
        }
    }
    
        
    
    
    
}
