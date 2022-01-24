#include <stdio.h>
   main()
{
    int a[6],position,element,i;
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&position);
    scanf("%d",&element);

    for(i=2;i<=position;i--)
    {
        a[i+1]=a[i];
    }
    a[position]=element;
    for(i=0;i<=5;i+2)
    {
        printf("%d",a[i]);
    }
}
