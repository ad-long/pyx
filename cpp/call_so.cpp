#include <stdio.h>
#include <dlfcn.h>
#include <string>
using std::string;

#include <Python.h>
#include "my_fun.h"

int main()
{
   Py_Initialize();
   PyInit_libmyso();
   printf("%d\n", add(3,5));
   Py_Finalize();
   return 0;
}