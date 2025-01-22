/* Given matrix, find sum of rectangle formed by 2 coordinates (l1, r1) and (l2, r2) */
#include<stdio.h>
int main(){
    int rows,columns;
    int l1,r1,l2,r2;
    int sum=0;
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    printf("Enter the number of columns:\n");
    scanf("%d",&columns);
    int a[rows][columns];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<rows;i++) {
        for (int j=0;j<columns;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("-------------Array-------------\n");
    for(int i=0;i<rows;i++) {
        for(int j=0;j<columns;j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the values of coordinates (l1, r1) and (l2, r2):\n");
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    if (l1<0 || l2>=rows || r1<0 || r2>=columns || l1>l2 || r1>r2){
        printf("Invalid coordinates!\n");
        return 1;
    }
    printf("The first co-ordinate is (%d, %d)\n",l1,r1);
    printf("The second co-ordinate is (%d, %d)\n",l2,r2);
    for(int i=l1;i<=l2;i++) {
        for (int j=r1;j<=r2;j++) {
            sum+=a[i][j];
        }
    }
    printf("Sum: %d\n",sum);
    return 0;
}
