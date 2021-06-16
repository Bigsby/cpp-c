#include <stdio.h>
#include <wrapper.h>

int main()
{
    printf("In C Client\n");
    printf("Instancianting with 3\n");
    CoreClass *instance = CoreClass_new(3);
    CoreClass_output(instance);
    printf("adding 20 = %d\n", CoreClass_add(instance, 20));
    CoreClass_output(instance);
    wrap_output();
    int a = 5, b = 18;
    printf("client adding %d + %d = %d\n", a, b, wrap_add(a, b));
    return 0;
}

