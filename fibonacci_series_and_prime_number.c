#include<stdio.h>
#include<conio.h>

int p(int n)
{
    int j,flag=0;
    for(j=2;j<=n;j++)
    {
        if(n%j==0)
        {
            flag++;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int i,n=17,next,f=1,s=0,number=2,j;char isprime;
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
                next = f+s;
                f=s;
                s=next;
                printf("%d ",next);
        }
        else{
            do{
                isprime='y';
                if(p(number)==1)
                {
                    printf("%d ",number);
                }
                else
                {
                    isprime='n';
                }
                number++;
            }while(isprime=='n');
        }
    }
    return 0;
}
