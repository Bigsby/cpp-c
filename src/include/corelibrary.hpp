#include <memory>

int add(int a, int b);
void output();

class Reference
{
    public:
        int id;
        Reference(int _id);
};

class CoreClass
{
    private:
        int m_value;
    public:
        CoreClass(int value);
        int add(int other);
        void output();
        void unused();
        std::shared_ptr<Reference> get_reference(int id);
};

