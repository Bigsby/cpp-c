#include <corelibrary.hpp>
#include <wrapper.h>
#include <vector>
#include <memory>

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

    int Reference_getId(Reference *instance)
    {
        return instance->id;
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

    static std::vector<std::shared_ptr<Reference> > reference_store;
    Reference *CoreClass_getReference(CoreClass *instance, int id)
    {
        std::shared_ptr<Reference> ref = instance->get_reference(id);
        reference_store.push_back(ref);
        return ref.get();
    }

    CoreClassHandle create_CoreClass(int value)
    {
        return (CoreClassHandle) new CoreClass(value);
    }

    int add_CoreClass(CoreClassHandle instance, int other)
    {
        return ((CoreClass *)instance)->add(other);
    }

    void output_CoreClass(CoreClassHandle instance)
    {
        ((CoreClass *)instance)->output();
    }

}
