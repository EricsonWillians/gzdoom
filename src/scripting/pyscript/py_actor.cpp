#include <pybind11/embed.h>
#include "py_actor.h"

namespace py = pybind11;

void Py_AddSpeed(double speed) 
{
    py_speed = speed;
}

PYBIND11_EMBEDDED_MODULE(py_actor, m) {
    m.def("Py_AddSpeed", &Py_AddSpeed, "A function that adds speed to all actors");
}