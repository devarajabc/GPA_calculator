/*2A+3B+2F1C-3C+1C+2C-*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define len 50

int main(void)
{
    //宣告字元陣列
    char array[len];

    //entering the string
    int i=-1;
   do{
       i++;
       scanf("%c",&array[i]);

   }
   while(array[i]!='\n');//enter 鍵就跳出
   //printf("%d\n",i);
   int total =i;

  // 宣告point
  float point[len]={0.0};
  //assign valuse into point
 /* for(int j=0;j<=i;j++)
  {
      if(isalpha(array[i])!=0&&array[i]!='F')
      {
          point[j]=(69-atoi(array[j-1]));
      }
      else if(array[i]=='F')
      {
          point[j]=0;
      }
  }
    for(int j=0;j<total;j++)
    {
        printf("%c\n",array[j]);
    }
    */

  for(int j=0;j<=total;j++)
  {
      if(isalpha(array[j])!=0&&array[j]!='F')
      {
          point[j]=69-array[j];
      }
      else if(array[j]=='F')
      {
          point[j]=0;
      }

       else if (array[j]=='+')//加號
      {
          point[j-1]=(69-array[j-1]+0.3);//assign valuse into point
          //printf("%c+ =%.2f  \n",array[j-1],69-array[j-1]+0.3);
          //printf("+++\n");
      }
      else if(array[j]=='-')
      {
          //assign valuse into point
          //printf("%c- =%.2f  \n",array[j-1],69-array[j-1]-0.3);
          //printf("---\n");
          point[j-1]=(69-array[j-1]-0.3);
      }


  }
  /*for(int j=0;j<total;j++)
  {
      printf("point[%d]=%f\n",j,point[j]);
  }*/
  float credit=0.0;
  float total_credit=0.0;
  for(int j=0;j<total;j++)
  {
      if(isdigit(array[j])!=0)//是數字
      {
          credit+=(array[j]-48)*point[j+1];
         // printf("%d*%f\n",array[j]-48,point[j+1]);
          //printf("credit= %f\n",credit);
          total_credit+=(array[j]-48);
          //printf("total credit =%f\n",total_credit);
      }
  }
  printf("%.2f\n",credit/total_credit);



    return 0;
}
