#include<stdio.h>
int main()
{
    int n;
    char a,b,q1,q2;
    scanf("%d",&n);
    int c1,c2,c3,d1,d2,d3,x1,y1,z1,x2,y2,z2;
    c1=c2=c3=d1=d2=d3=x1=y1=z1=x2=y2=z2=0;
    d2=n;
    while(n--)
    {
        getchar();
        scanf("%c %c",&a,&b);

        if(a=='C'&&b=='J'){c1++,x1++;}
        if(a=='B'&&b=='C'){c1++,y1++;}
        if(a=='J'&&b=='B'){c1++,z1++;}
        if(a=='C'&&b=='C')c2++;
        if(a=='B'&&b=='B')c2++;
        if(a=='J'&&b=='J')c2++;
        if(b=='C'&&a=='J'){d1++,x2++;}
        if(b=='B'&&a=='C'){d1++,y2++;}
        if(b=='J'&&a=='B'){d1++,z2++;}

    }
    c3=d2-c1-c2;
    d3=d2-d1-c2;
    if(x1>y1&&x1>z1)
        q1='C';
    else if(y1>x1&&y1>z1)
        q1='B';
    else if(z1>x1&&z1>y1)
        q1='J';
    else if(x1==y1&&x1>z1)
        q1='B';
    else if(y1==z1&&y1>x1)
        q1='B';
    else if(x1==z1&&x1>y1)
        q1='C';
    else
        q1='B';
         if(x2>y2&&x2>z2)
        q2='C';
    else if(y2>x2&&y2>z2)
        q2='B';
    else if(z2>x2&&z2>y2)
        q2='J';
    else if(x2==y2&&x2>z2)
        q2='B';
    else if(y2==z2&&y2>x2)
        q2='B';
    else if(x2==z2&&x2>y2)
        q2='C';
    else
        q2='B';
    printf("%d %d %d\n",c1,c2,c3);
    printf("%d %d %d\n",d1,c2,d3);
    printf("%c %c",q1,q2);
}
