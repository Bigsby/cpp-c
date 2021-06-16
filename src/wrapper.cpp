#include <corelibrary.hpp>
#include <wrapper.h>

extern "C"
{
    void wrap_output()
    {
        output();
    }

    int wrap_add(int a, int b)
    {
        return add(a, b);
    }

    CoreClass *CoreClass_new(int value)
    {
        return new CoreClass(value);
    }

    int CoreClass_add(CoreClass *instance, int other)
    {
        return instance->add(other);
    }

    void CoreClass_output(CoreClass *instance)
    {
        instance->output();
    }
}
