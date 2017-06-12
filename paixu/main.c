//
//  main.c
//  paixu
//
//  Created by 20161104596 on 17/6/12.
//  Copyright © 2017年 20161104596. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a[10];
    int i,j;
    int tem;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
        for(i=0;i<=10-j;i++)
        {
            if(a[i]<a[i+1])
            {
                tem=a[i];
                a[i]=a[i+1];
                a[i+1]=tem;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
