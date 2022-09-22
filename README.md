# 说明

演示so库的两种方式，一种通过引用头文件的方式，一种是运行时通过dlopen加载。

# 使用方式

```
gcc -shared -fPIC shlibexample.c -o libshlibexample.so
```

```
gcc -shared -fPIC dllibexample.c -o libdllibexample.so
```

```
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:.
```

```
sudo ldconfig
```

```
gcc main.c -o main -L . -lshlibexample -ldl
```

# 测试结果

```
uos@uos:/media/uthuqinghong/EEECE1A7ECE169F3/linux-4.19.256/libTest$ ./main
call SharedLibApi() function of libshlibexample.so
this is a shared libary demo
this is a Dynamical Loading libary demo
```

# 参考

-I 选项向gcc的头文件搜索路径中添加新的目录 gcc foo.c -I /home/justin/include -o foo

-L 选项向gcc的库文件搜索路径中添加新的目录

-l 指定链接的库文件名，如-ldavid表示指示gcc去连接库文件libdavid.so