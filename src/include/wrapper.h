#ifdef __cplusplus

extern void output();
extern int add(int,int);

extern "C" {
#endif

void wrap_output();
int wrap_add(int, int);

typedef struct Reference Reference;
int Reference_getId(Reference *);

typedef struct CoreClass CoreClass;
CoreClass *CoreClass_new(int);
int CoreClass_add(CoreClass *, int);
void CoreClass_output(CoreClass *);
Reference *CoreClass_getReference(CoreClass *, int);

typedef void *CoreClassHandle;
CoreClassHandle create_CoreClass(int);
int add_CoreClass(CoreClassHandle, int);
void output_CoreClass(CoreClassHandle);

#ifdef __cplusplus
}
#endif
