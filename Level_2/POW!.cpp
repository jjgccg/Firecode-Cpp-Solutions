// O(n) non-recusrive solution
double power(double x, int n)
{
    if(n == 0) return 1;
    
    double result = 1.0;
    
    for(int i = 0; i < abs(n); i++)
    {
        result = result * x;
    }
    
    if(n < 0) return 1/result;
    
    return result;
}