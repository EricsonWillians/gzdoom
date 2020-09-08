#include <pybind11/pybind11.h>
#include "py_actor.h"

namespace py = pybind11;

int Py_Add(int i, int j) 
{
    return i + j;
}

PYBIND11_MODULE(py_actor, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("Py_Add", &Py_Add, "A function which adds two numbers");
}