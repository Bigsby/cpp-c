#include <stdio.h>
#include <corelibrary.hpp>

int add(int a, int b)
{
    return a + b;
}

void output()
{
    printf("in core\n");
}

CoreClass::CoreClass(int value) : m_value(value) {}

int CoreClass::add(int other)
{
    m_value += other;
    return m_value;
}

void CoreClass::output()
{
    printf("CoreClass %d\n", m_value);
}

void CoreClass::unused()
{
    printf("This is unused\n");
}

