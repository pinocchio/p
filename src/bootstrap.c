#include <bootstrap.h>

Object RootPackage;

DECLARE_CLASS(Organization_RootPackage);
DECLARE_CLASS(Organization_Package);

void create_RootPackage() {
    Type_Object result = (Type_Object)instantiate(Organization_RootPackage_Class);
    result->ivals[0] = (Object)new_Type_Dictionary();
    RootPackage = (Object)result;
}

void bootstrap()
{
    Organization_RootPackage_Class =
        new_Class_named((Object)Type_Object_Class,
                        L"RootPackage",
                        CREATE_OBJECT_TAG(ORGANIZATION_ROOTPACKAGE));
    Organization_Package_Class =
        new_Class_named((Object)Organization_RootPackage_Class,
                        L"Package",
                        CREATE_OBJECT_TAG(ORGANIZATION_PACKAGE));

    create_RootPackage();
    
    initialize_libraries();
}

Object new_Organization_Package(Object parent, const wchar_t * name)
{
    Type_Object result = (Type_Object)instantiate(Organization_Package_Class);
    result->ivals[0] = (Object)new_Type_Dictionary();
    result->ivals[1] = parent;
    result->ivals[2] = (Object)new_Type_Symbol_cached(name);
    Object pmembers = raw_Type_Object_at((Type_Object)parent, GETTAG(parent), 0);
    Type_Dictionary_quick_store(
        (Type_Dictionary)pmembers,
        (Object)new_Type_Symbol_cached(name),
        (Object)result);
    return (Object)result;
}

