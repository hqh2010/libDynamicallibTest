#include <stdio.h>
#include <dlfcn.h>

#include "shlibexample.h"

int main() 
{
    printf("call SharedLibApi() function of libshlibexample.so\n");
    SharedLibApi();
    // 动态装载so
    void* handle = dlopen("libdllibexample.so", RTLD_NOW);
    if (NULL == handle) {
        printf("open libdllibexample.so error:%s\n", dlerror());
        return -1;
    }
    int (*func)();
    char* err;
    func = dlsym(handle, "DynamicalLoadingLibApi");
    err = dlerror();
    if (NULL != err) {
        printf("DynamicalLoadingLibApi not found in libdllibexample.so:%s\n", err);
        return -1;
    }
    func();
    dlclose(handle);
    return 0;
}