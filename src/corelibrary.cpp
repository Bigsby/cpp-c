#include <iostream>
#include <memory>
#include <corelibrary.hpp>

int add(int a, int b)
{
    return a + b;
}

void output()
{
    std::cout << "message from core" << std::endl;
}

Reference::Reference(int _id) : id(_id) {}

CoreClass::CoreClass(int value) : m_value(value) {}

int CoreClass::add(int other)
{
    m_value += other;
    return m_value;
}

void CoreClass::output()
{
    std::cout << "CoreClass " << m_value << std::endl;
}

void CoreClass::unused()
{
    std::cout << "This is unused" << std::endl;
}

std::shared_ptr<Reference> CoreClass::get_reference(int id)
{
    return std::shared_ptr<Reference>(new Reference(id));
}
