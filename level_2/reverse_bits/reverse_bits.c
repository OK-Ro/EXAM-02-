unsigned char reverse_bits(unsigned char octet)
{
    unsigned char results = 0;
    int i = 0;
    
    while (i < 8)
    {
        results = (results << 1) | ((octet >> i) & 1);
        i++;
    }
    return (results);
}