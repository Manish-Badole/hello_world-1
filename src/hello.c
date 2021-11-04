
 char * sgs_clib_strpbrk(const char *str1, const char *str2) 
    {
    char *p ;

    for(; *str2 ; ++str2)
    {
        if(*str2 == str1)
            p = (char*) str2;
    }
    return p;
}
