int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;

    // Fn = Fn-1 + Fn-2
    // We start at n==3, so Fn = 1
    int Fn = 1;
    int Fn_1 = 1;
    int Fn_2 = 0;

    for(int i = 2; i <= n; i++)
    {
        Fn = Fn_1 + Fn_2;
        Fn_2 = Fn_1;
        Fn_1 = Fn;
    }

    return Fn;
}
