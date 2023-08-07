// Creating a Simple Extension Module
// It will make your module a permanent part of the Python interpreter (binary) - compiling and linking it with the Python system
// Follow the instructions printed by makefile, it will also create object file
// After install this spam module, it should be possible
//   >>> import spam
//   >>> status = spam.system("ls -l")

#define PY_SSIZE_T_CLEAN
// #include <Python.h>
#include "Python.h"

static PyObject *
spam_system(PyObject *self, PyObject *args)
{
    const char *command;
    int sts;

    // arguments are Python objects, convert them to C values
    if (!PyArg_ParseTuple(args, "s", &command))
        return NULL;
    sts = system(command);
    return PyLong_FromLong(sts);
}

static PyMethodDef SpamMethods[] = {
    {"system",  spam_system, METH_VARARGS, "Execute a shell command."},
    {NULL, NULL, 0, NULL} /* Sentinel */
};

static struct PyModuleDef spammodule = {
    PyModuleDef_HEAD_INIT,
    "spam",   /* name of module */
    "to be written yet", /* module documentation, may be NULL */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    SpamMethods
};

static PyObject *SpamError;

PyMODINIT_FUNC
PyInit_spam(void)
{
    PyObject *m;

    m = PyModule_Create(&spammodule);
    if (m == NULL)
        return NULL;

    SpamError = PyErr_NewException("spam.error", NULL, NULL);
    if (PyModule_AddObjectRef(m, "error", SpamError) < 0) {
        Py_CLEAR(SpamError);
        Py_DECREF(m);
        return NULL;
    }

    return m;
}



