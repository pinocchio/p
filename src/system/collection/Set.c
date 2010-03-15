#include <stdlib.h>
#include <stdio.h>
#include <system/collection/Set.h>

/* ========================================================================= */

DECLARE_CLASS(Collection_Set);

/* ========================================================================= */

Collection_Set new_Collection_Set()
{
    NEW_OBJECT(Collection_Set);
    result->size      = new_Type_SmallInt(0);
    result->ratio     = new_Type_Float(0.6);
    result->maxLinear = new_Type_SmallInt(20);
    result->data      = new_Type_Array_withAll(SET_SIZE, Nil);
    return result;
}

void pre_init_Collection_Set()
{
    Collection_Set_Class = new_Class_named(Type_Object_Class, L"Collection_Set",
                                      CREATE_OBJECT_TAG(COLLECTION_SET));
    REFER_TO(Collection_Set);
}

/* ========================================================================= */

NATIVE(Collection_Set_basicNew)
    zap_EXP();
    poke_EXP(0, new_Collection_Set());
}

/* ========================================================================= */

void post_init_Collection_Set()
{

    Collection_Dictionary natives = add_plugin(L"Collection.Set");
    store_native(natives, SMB_basicNew, NM_Collection_Set_basicNew);
}
