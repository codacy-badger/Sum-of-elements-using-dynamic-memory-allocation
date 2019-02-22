#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,*ptr,sum=0;
printf("\nEnter the no. of elements: ");
scanf("%d",&n);

ptr=(int*)calloc(n,sizeof(int));

if(ptr==NULL)
{
    printf("Error! Memory is not allocated");
    exit(0);
}

printf("\nEnter the elements: ");
for(int i=0;i<n;i++)
{
    scanf("%d",(ptr+i));
    sum+=*(ptr+i);
}
printf("Sum is:%d",sum);
return 0;
}
