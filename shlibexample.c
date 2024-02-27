
#include <stdio.h>
#include "shlibexample.h"

/**  可以通过标准C库函数获取API对应的so文件的绝对路径
#include <cstdlib>
#include <dlfcn.h>
#include <iostream>

std::string GetAbsolutePath(const std::string& fpath)
{
     char buffer[1024] = {'\0'};
     if (realpath(fpath.c_str(), buffer) != nullptr)
     {
         std::cout << "get success" << std::endl;
         return std::string(buffer);

     }
     return "";


}

void GetSharedLibPath()
{
    Dl_info dl_info;
    if (dladdr((void*)GetSharedLibPath, &dl_info) != 0)
    {
         std::cout<< GetAbsolutePath(dl_info.dli_fname) << std::endl;  
    } else
    {
         std::cout<< "can't find lib path" << std::endl;  
    }
}
**/

int SharedLibApi() {

   printf("this is a shared libary demo\n");
   return 0;
}

