#include<stdio.h>

int main()
{
    int x,y,z,result,reresult;
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("2");
    }

    else if(x<y && y%x==0){
        z=y/x;
        printf("%d",z);
    }
    else if(x<y && y%x !=0){
         result = y/x;
         reresult = result-1+2;
         printf("%d",reresult);
         

    }
  
    

    return 0;

}