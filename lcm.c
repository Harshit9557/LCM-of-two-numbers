#include<stdio.h>
int main()
{
    int n1,n2,h=0,l,i;
    printf("Enter values of n1,n2 : \n");
    scanf("%d\n%d",&n1,&n2);
    for(i=1;i<=n1,i<=n2;i++)
        if(n1%i==0 && n2%i==0)
            h=i;
    l=n1*n2/h;
    printf("LCM : %d",l);
    return 0;
}
