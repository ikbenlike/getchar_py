#include <Python.h>

static PyObject *getchar_getchar(PyObject *self, PyObject *args){
    if(!PyArg_ParseTuple(args, "")){
        return NULL;
    }
    char *in = calloc(2, 1);
    *in = getchar();
    PyObject *in_py = PyUnicode_FromFormat("%s", in);
    return in_py;
}

static PyMethodDef GetcharMethods[] = {
    {"getchar", getchar_getchar, METH_VARARGS, "Direct link to C's getchar() stdlib function."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef getcharmodule = {
    PyModuleDef_HEAD_INIT,
    "getchar",
    NULL,
    -1,
    GetcharMethods
};

PyMODINIT_FUNC PyInit_getchar(){
    return PyModule_Create(&getcharmodule);
}