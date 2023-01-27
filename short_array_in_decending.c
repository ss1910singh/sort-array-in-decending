#include<stdio.h>
 int main(){
    int size,i,temp,j;
    printf("enter size of array:-\n ");
    scanf("%d",&size);
    int a[size];
    printf("enter %d element of the array:- \n",size);
   for(i=0;i<size;i++){
    scanf("%d",&a[i]);
   }
    printf("element of array are:- ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]<a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    } 
    printf("\nafter sorting array in decending order:- ");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    return 0;
 }