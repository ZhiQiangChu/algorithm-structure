/**
警察审问4名窃贼嫌疑犯。现在已知，这4人当中仅有一名是窃贼，还知道这4个人中的每个人要么是诚实的，要么总是说谎。

这4个人给警察的回答如下。
甲说：“乙没有偷，是丁偷的。”
乙说：“我没有偷，是丙偷的。”
丙说：“甲没有偷，是乙偷的。”
丁说：“我没有偷。”

请根据这4个人的回答判断谁是窃贼。
*/

#include<stdio.h>
int main()
{
    int i, A=1, B=0, C=0, D=0;  /*先假定甲是窃贼*/
    for(i=1; i<=4; i++)
        if(B+D==1 && B+C==1 && A+B==1)  /*测试甲乙丙丁谁是窃贼，符合该条件的即为窃贼*/
            break;
        else
        {
            if(i == 1)
            {
                A=0;  /*甲不是窃贼，测试乙是否是窃贼*/
                B=1;
            }
            if(i == 2)
            {
                B=0;  /*甲乙均不是窃贼，测试丙是否是窃贼*/
                C=1;
            }
            if(i == 3)
            {
                C=0;  /*甲乙丙都不是窃贼，测试丁是否是窃贼*/
                D=1;
            }
        }
    /*输出结果*/
    printf("判断结果：\n");
    if(i == 1)
        printf("甲是窃贼\n");
    if(i == 2)
        printf("乙是窃贼\n");
    if(i == 3)
        printf("丙是窃贼\n");
    if(i == 4)
        printf("丁是窃贼\n");
   
    return 0;
}

//运行结果：

//判断结果：
//乙是窃贼
