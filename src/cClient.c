#include <stdio.h>
#include <wrapper.h>

void test_pointer_struct()
{
    printf("Instantianting pointer struct with 3\n");
    CoreClass *instance = CoreClass_new(3);
    CoreClass_output(instance);
    printf("adding 20 = %d\n", CoreClass_add(instance, 20));
    CoreClass_output(instance);
    int referenceId = 15;
    printf("Creating reference with %d\n", referenceId);
    Reference *reference = CoreClass_getReference(instance, referenceId);
    printf("Reference id is %d\n", Reference_getId(reference));
}

void test_handle()
{
    printf("Instantiating handle with 5\n");
    CoreClassHandle instance = create_CoreClass(5);
    output_CoreClass(instance);
    printf("adding 33 = %d\n", add_CoreClass(instance, 33));
    output_CoreClass(instance);
}
    
int main()
{
    printf("In C Client\n");
    test_pointer_struct();
    printf("\n");
    wrap_output();
    int a = 5, b = 18;
    printf("client adding %d + %d = %d\n\n", a, b, wrap_add(a, b));
    test_handle();
    return 0;
}

