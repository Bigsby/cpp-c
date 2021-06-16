#ifdef __cplusplus

extern void output();
extern int add(int,int);

extern "C" {
#endif

void wrap_output();
int wrap_add(int, int);

typedef struct CoreClass CoreClass;
CoreClass *CoreClass_new(int);
int CoreClass_add(CoreClass *, int);
void CoreClass_output(CoreClass *);

#ifdef __cplusplus
}
#endif
