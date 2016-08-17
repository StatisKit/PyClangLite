#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_13b544d609775d6c82f349029c56dab2()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::TemplateSpecializationType::*method_pointer_4e59a11b1ef95a7aacf4c4bcb0b52a5e)() const = &::clang::TemplateSpecializationType::isCurrentInstantiation;
    bool  (*method_pointer_b5445f9ea97a5399a83856c3cb3618a7)(class ::clang::Type  const *) = ::clang::TemplateSpecializationType::classof;
    bool  (::clang::TemplateSpecializationType::*method_pointer_f98e09058f165bb8870787f9330d396f)() const = &::clang::TemplateSpecializationType::isTypeAlias;
    unsigned int  (::clang::TemplateSpecializationType::*method_pointer_131dfccb4fc75ca3991c2ab04fc4c3fd)() const = &::clang::TemplateSpecializationType::getNumArgs;
    bool  (::clang::TemplateSpecializationType::*method_pointer_23c29ba996d15d478d9ba05a1d06723d)() const = &::clang::TemplateSpecializationType::isSugared;
    boost::python::class_< class ::clang::TemplateSpecializationType, autowig::HeldType< class ::clang::TemplateSpecializationType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_13b544d609775d6c82f349029c56dab2("TemplateSpecializationType", "", boost::python::no_init);
    class_13b544d609775d6c82f349029c56dab2.def("is_current_instantiation", method_pointer_4e59a11b1ef95a7aacf4c4bcb0b52a5e, "");
    class_13b544d609775d6c82f349029c56dab2.def("classof", method_pointer_b5445f9ea97a5399a83856c3cb3618a7, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_type_alias", method_pointer_f98e09058f165bb8870787f9330d396f, "");
    class_13b544d609775d6c82f349029c56dab2.def("get_num_args", method_pointer_131dfccb4fc75ca3991c2ab04fc4c3fd, "");
    class_13b544d609775d6c82f349029c56dab2.def("is_sugared", method_pointer_23c29ba996d15d478d9ba05a1d06723d, "");
    class_13b544d609775d6c82f349029c56dab2.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TemplateSpecializationType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TemplateSpecializationType >, autowig::HeldType< class ::clang::Type > >();
    }

}