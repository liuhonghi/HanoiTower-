//
//  main.c
//  HanoiTower
//
//  Created by HiLau on 2023/6/6.
//

#include <stdio.h>

void Hanoi(int n,char a,char b,char c)//此处函数参数含义为：n个盘子从a绕过b到c
{
    if(n == 1)
    {
        printf("%c --> %c\n",a,c);
    }
    else
    {
        Hanoi(n-1, a, c, b);//根据我们一开始对Hanoi函数的含义的定义，此处为：n-1个圆盘从a绕过c到b
        printf("%c --> %c\n",a,c);//上一个步骤b上有n-1个圆盘，剩下大盘在a上，c为空；所以a到c即可；
        Hanoi(n-1, b, a, c);//根据我们一开始对Hanoi函数的含义的定义，此处为：n-1个圆盘从b绕过a到c
    }
}
int main()
{
    int i = 0;
    printf("请输入圆盘数:");
    scanf("%d",&i);
    printf("移动步骤为:\n");
    Hanoi(i,'A','B','C');
    return 0;
}
//汉诺塔问题国外有一位大神将其理解为二进制加法时的跳动，有研究兴趣的朋友可以去搜视频深入研究一下
//特别有意思，可以让你打开另一个思路，理解汉诺塔问题的本质。
