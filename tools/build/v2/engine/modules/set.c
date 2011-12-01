/* Copyright Vladimir Prus 2003. Distributed under the Boost */
/* Software License, Version 1.0. (See accompanying */
/* file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt) */

#include "../native.h"
#include "../object.h"

/*
    local result = ;
    local element ;
    for element in $(B)
    {
        if ! ( $(element) in $(A) )
        {
            result += $(element) ;
        }
    }
    return $(result) ;
*/
LIST *set_difference( FRAME *frame, int flags )
{

    LIST* b = lol_get( frame->args, 0 );    
    LIST* a = lol_get( frame->args, 1 );    

    LIST* result = 0;
    for(; b; b = b->next)
    {
        if (!list_in(a, b->value))
            result = list_new(result, object_copy(b->value));
    }
    return result;
}

void init_set()
{
    {
        const char* args[] = { "B", "*", ":", "A", "*", 0 };
        declare_native_rule("set", "difference", args, set_difference, 1);
    }

}
