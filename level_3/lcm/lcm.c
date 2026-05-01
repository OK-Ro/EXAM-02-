unsigned int	lcm(unsigned int a, unsigned int b)
{
    unsigned int hcf;
    unsigned int x;
    unsigned int y;

    if (a == 0 || b == 0)
        return 0;
    x = a;
    y = b;
    while (y != 0)
    {  
        unsigned int temp = y;
        y = x % y;
        x = temp;
    }
    hcf = x;
    return (a * b) / hcf;
}