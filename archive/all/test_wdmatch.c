#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_wdmatch(char *str1, char *str2)
{
    int i;
    int j;

    i = 0;
    j = -1;
    while (str1[i])
    {    
        j++;
        while((str2[j]) && (str2[j] != str1[i]))
        {
            j++;
        }
        if (!str2[j])
        {
        write(1, "\n", 1);
        return;
        }
        i++;
    }

    while (*str1)
    {
        write(1, str1, 1);
        str1++;
    }
    write (1, "\n", 1);
}

void ft_wdmatch2(char *str1, char *str2)
{
    int i = 0;
    int j = 0;
    int match_len = 0;

    while (str1[i])
    {
        while (str2[j])
        {
            if (str1[i] == str2[j])
            {
                match_len++;
                i++;
                break;
            }
            j++;
        }

        if (!str2[j])
        {
            return;
        }
    }

    i = 0;
    j = 0;
    while (str1[i])
    {
        while (str2[j])
        {
            if (str1[i] == str2[j])
            {
                write(1, &str1[i], 1);
                match_len--;
                i++;
                break;
            }
            j++;
        }

        if (match_len == 0)
        {
            break;
        }
    }

    write(1, "\n", 1);
}


int main()
{
    char *testCases[] = {
        "faya", "fgvvfdxcacpolhyghbreda",
        "faya", "fgvvfdxcacpolhyghbred",
        "quarante deux", "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq ",
        "error", "rrerrrfiiljdfxjyuifrrvcoojh",
        "abcde", "defg",
        "abc", "bcdea",
        "abcd", "eabcd",
        "aaabaaa", "aba",
        "ab", "a",
        "foo", "bar",
        "hello", "world",
        "abc", "xyz",
        "abcdefg", "def",
        "abcdefg", "cdefg",
        "hello world", "world",
        "apple", "banana",
        "the quick brown fox", "the quick brown fox jumps over the lazy dog"
    };
    
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
    for (int i = 0; i < numTestCases; i += 2)
    {
        printf("Testing with strings: \"%s\" and \"%s\"\n", testCases[i], testCases[i+1]);
        
        // Test ft_wdmatch function
        //printf("ft_wdmatch: ");
        ft_wdmatch(testCases[i], testCases[i+1]);
        
        // Test ft_wdmatch2 function
        ft_wdmatch2(testCases[i], testCases[i+1]);


        printf("\n");
    }
    
    return 0;
}
