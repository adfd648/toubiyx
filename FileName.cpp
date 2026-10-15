#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    srand((unsigned int)time(NULL));
	int zheng=0,fan=0,num=1,maxnum=1,last=0;
    for (int i=0;i<100;i++)
    {
        int r=rand()%2;
        if (r==1)
        {
			printf("第%d次实验结果：正\n", i+1);
			zheng++;
	     }
		else
		{
			printf("第%d次实验结果：反\n", i+1); 
            fan++;
        }
        if (r==last)
        {
            num++;
            if (num>maxnum)
            {
                maxnum=num;
            }
        }
        else
        {
            num = 1; 
            last = r;
        }
       
    }
    printf("正面次数：%d\n",zheng);
    printf("反面次数：%d\n",fan);
    printf("最长连续相同结果次数：%d\n", maxnum);
    return 0;
}