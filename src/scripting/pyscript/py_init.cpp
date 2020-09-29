#include <pybind11/embed.h>
#include <pybind11/pybind11.h>
#include "py_init.h"
#include "py_actor.h"
namespace py = pybind11;

void py_init() {
    py::scoped_interpreter guard{};
    py::print("Hello, World! GZDoom now runs Python :)"); // use the Python API
	// py::module sys_path_updater = py::module::import("sys_path_updater");
	py::module test = py::module::import("_test");
	double GLOBAL_MONSTER_SPEED = test.attr("GLOBAL_MONSTER_SPEED").cast<double>();
    py_speed = GLOBAL_MONSTER_SPEED;
}