#include <stdio.h>
#include <stdlib.h>

const char **rt_bound_error_msg;

void rt_error(ucontext_t *uc)
{
}

int main()
{
    if (rt_bound_error_msg) 
    //if (rt_bound_error_msg && *rt_bound_error_msg)
        rt_error(*rt_bound_error_msg);
    
    return 0;
}

