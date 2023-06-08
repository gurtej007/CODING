#include<stdio.h>

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{5,6,7},{8,9,10},{11,12,13}};
    int c[3][3];
    for(int i=0;i<3;i++){
        int s1=0 ,s2=0,s3=0;
        for(int j=0;j<3;j++){
            s1+=a[i][j]*b[j][0];
            s2+=a[i][j]*b[j][1];
            s3+=a[i][j]*b[j][2];
        }
        c[i][0]=s1;
        c[i][1]=s2;
        c[i][2]=s3;
    }
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}