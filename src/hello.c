
char *sgs_clib_strrchr(const char *str, int c)
{
    char *p ;

    for(; *str ; ++str)
    {
        if(*str == c)
            p = (char*) str;
    }
    return p;
}