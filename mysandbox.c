#include <stdio.h>
// #include <Python.h>
#include "Python.h"

int main(int argc, char const *argv[])
{
    // PyObject *co;
    // co = Py_CompileString("print('world')","",0);
    // printf("finish\n");
    // printf("%ld",co->ob_refcnt);

    PyStatus status;
    PyConfig config;
    PyConfig_InitPythonConfig(&config);

    printf("got to the end\n");
    return 0;
}

                                                                                                                                                                                                                                                    