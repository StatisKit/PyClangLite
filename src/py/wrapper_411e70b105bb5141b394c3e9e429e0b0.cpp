#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_411e70b105bb5141b394c3e9e429e0b0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_76e0d74511f0561a931ebf6d2efc93cf)(class ::clang::Type  const *) = ::clang::DependentNameType::classof;
    class ::clang::QualType  (::clang::DependentNameType::*method_pointer_e5c2cbf7a1595cf0b6cceaec8e4ad6a5)() const = &::clang::DependentNameType::desugar;
    bool  (::clang::DependentNameType::*method_pointer_61c6a51503ce5d819e51446b2469e6b0)() const = &::clang::DependentNameType::isSugared;
    boost::python::class_< class ::clang::DependentNameType, autowig::HeldType< class ::clang::DependentNameType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_411e70b105bb5141b394c3e9e429e0b0("DependentNameType", "", boost::python::no_init);
    class_411e70b105bb5141b394c3e9e429e0b0.def("classof", method_pointer_76e0d74511f0561a931ebf6d2efc93cf, "");
    class_411e70b105bb5141b394c3e9e429e0b0.def("desugar", method_pointer_e5c2cbf7a1595cf0b6cceaec8e4ad6a5, "");
    class_411e70b105bb5141b394c3e9e429e0b0.def("is_sugared", method_pointer_61c6a51503ce5d819e51446b2469e6b0, "");
    class_411e70b105bb5141b394c3e9e429e0b0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DependentNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DependentNameType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}