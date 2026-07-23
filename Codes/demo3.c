void main()
{
    int a=10,b=20;
    a=fun1(a,b);
    int x=a+b;
    b=fun2(x,10);
    printf("%d,%d,%d",a,b,x);
}
    int fun1(int x,int y)
    {
        int p=printf("hello%d",x);
        return p+y;
    }
    int fun2(int a,int b)
    {
        return a>b;
    }