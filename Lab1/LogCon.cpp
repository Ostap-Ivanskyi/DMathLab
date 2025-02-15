#include "LogCon.h"

bool NOT(bool a)
{
    if (a == false)
        return true;
    return false;
}

bool AND(bool a, bool b)
{
    if (a == b)
    {
        if (a == true)
            return true;
    }
    return false;
}

bool OR(bool a, bool b)
{
    if (a == b)
    {
        if (a == false)
            return false;
    }
    return true;
}
bool XOR(bool a, bool b)
{
    if (a == b)
        return false;
    return true;
}
bool IMP(bool a, bool b)
{
    if (a == true)
    {
        if (b == false)
            return false;
    }
    return true;
}
bool EQ(bool a, bool b)
{
    if (a == b)
        return true;
    return false;
}

bool F7(bool a, bool b, bool c)
{
    return EQ(AND(NOT(OR(NOT(a), b)), c), OR(NOT(b), c));
}
