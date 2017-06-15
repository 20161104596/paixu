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
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("//Users//a20161104596//Desktop//paixu//input.txt","r");
    fp2=fopen("//Users//a20161104596//Desktop//paixu//output.txt","w");

    int a[15],i,j,tem;
    if(fp1==NULL)
    {
        printf("文件不存在");
    }
    else
    {
        for(i=0; i<10; i++)
        {
            fscanf(fp1,"%d",&a[i]);
        }
        for(j=0; j<9; j++)
        {
            for(i=0; i<9-j; i++)
            {
                if(a[i]>a[i+1])
                {
                    tem=a[i];
                    a[i]=a[i+1];
                    a[i+1]=tem;
                }
            }
        }
        for(i=0; i<10; i++)
            
        {
            fprintf(fp2,"%d ",a[i]);
            
            printf("%d ",a[i]);
            
        }
        fprintf(fp2,"\n");
        printf("\n");
        fclose(fp1);
        fclose(fp2);
    }
    
    
    return 0;
}
