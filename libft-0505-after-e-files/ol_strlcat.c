#include "libft.h"

int main(void)
{
    char dst14a[15] = "Hello";
    char dst00a[1] = "";
    char dst02a[2] = "1";
    char dst14b[15] = "Hello";
    char dst00b[1] = "";
    char dst02b[2] = "1";
    char src08[9] = ", World!";
    char src17[] = ", my name is John";
    char srcnu[] = "NULL \0 is here";
    char src00[] = "";
    size_t d14s08 = 13; 
    size_t d14s17 = 13;
    size_t d14s00 = 14;
    size_t d00s08 = 0;
    size_t d14snu = 14;
    size_t d02s08 = 1;
    
    ft_strlcat(dst14a, src08, d14s08);
    strlcat(dst14b, src08, d14s08);
    printf("d14s08_ft_strlcat:\t%s\n", dst14a);
    printf("d14s08_sy_strlcat:\t%s\n", dst14b);
    assert(strcmp(dst14a, dst14b) == 0);
    
    ft_strlcat(dst14a, src17, d14s17); 
    strlcat(dst14b, src17, d14s17);
    printf("d14s17_ft_strlcat:\t%s\n", dst14a);
    printf("d14s17_sy_strlcat:\t%s\n", dst14b);
    assert(strcmp(dst14a, dst14b) == 0);
    
    ft_strlcat(dst14a, src00, d14s00); 
    strlcat(dst14b, src00, d14s00);
    printf("d14s00_ft_strlcat:\t%s\n", dst14a);
    printf("d14s00_sy_strlcat:\t%s\n", dst14b);
    assert(strcmp(dst14a, dst14b) == 0);
    
    ft_strlcat(dst00a, src08, d00s08); 
    strlcat(dst00b, src08, d00s08);
    printf("d00s08_ft_strlcat:\t%s\n", dst00a);
    printf("d00s08_sy_strlcat:\t%s\n", dst00b);
    assert(strcmp(dst00a, dst00b) == 0);

	ft_strlcat(dst14a, srcnu, d14snu); 
	strlcat(dst14b, srcnu, d14snu);
    printf("d14snu_ft_strlcat:\t%s\n", dst14a);
    printf("d14snu_sy_strlcat:\t%s\n", dst14b);
    assert(strcmp(dst14a, dst14b) == 0);
    
    ft_strlcat(dst00a, src08, d00s08); 
    strlcat(dst00b, src08, d00s08);
    printf("d00s08_ft_strlcat:\t%s\n", dst00a);
    printf("d00s08_sy_strlcat:\t%s\n", dst00b);
    assert(strcmp(dst00a, dst00b) == 0);
    
    ft_strlcat(dst02a, src08, d02s08); 
    strlcat(dst02b, src08, d02s08);
    printf("d02s08_ft_strlcat:\t%s\n", dst02a);
    printf("d02s08_sy_strlcat:\t%s\n", dst02b);
    assert(strcmp(dst02a, dst02b) == 0);
    
    printf("the function passed all test cases!\n");
    return 0;
}
