#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_3bff763d917f5a62bc6b705f9eb6fdba()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_0cf84b41b6a25203872cc34e40c278ed)(class ::clang::Type  const *) = ::clang::TypeOfExprType::classof;
    class ::clang::QualType  (::clang::TypeOfExprType::*method_pointer_30e64853a597533a9d2f79f1d1eb0392)() const = &::clang::TypeOfExprType::desugar;
    bool  (::clang::TypeOfExprType::*method_pointer_4e615a10fbf2519ba6aab390a470d55e)() const = &::clang::TypeOfExprType::isSugared;
    boost::python::class_< class ::clang::TypeOfExprType, autowig::HeldType< class ::clang::TypeOfExprType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_3bff763d917f5a62bc6b705f9eb6fdba("TypeOfExprType", "", boost::python::no_init);
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("classof", method_pointer_0cf84b41b6a25203872cc34e40c278ed, "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("desugar", method_pointer_30e64853a597533a9d2f79f1d1eb0392, "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.def("is_sugared", method_pointer_4e615a10fbf2519ba6aab390a470d55e, "");
    class_3bff763d917f5a62bc6b705f9eb6fdba.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeOfExprType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeOfExprType >, autowig::HeldType< class ::clang::Type > >();
    }

}