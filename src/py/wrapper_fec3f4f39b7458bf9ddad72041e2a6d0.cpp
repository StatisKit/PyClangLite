#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_fec3f4f39b7458bf9ddad72041e2a6d0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_565eed5e389e57a2af0b7d5539d7d068)(class ::clang::Type  const *) = ::clang::ObjCInterfaceType::classof;
    bool  (::clang::ObjCInterfaceType::*method_pointer_da9048cbb5835ea8a3be0e79006b8c98)() const = &::clang::ObjCInterfaceType::isSugared;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCInterfaceType::*method_pointer_1336026df3b85ad680343ff451f13ad9)() const = &::clang::ObjCInterfaceType::getDecl;
    boost::python::class_< class ::clang::ObjCInterfaceType, autowig::HeldType< class ::clang::ObjCInterfaceType >, boost::python::bases< class ::clang::ObjCObjectType >, boost::noncopyable > class_fec3f4f39b7458bf9ddad72041e2a6d0("ObjCInterfaceType", "", boost::python::no_init);
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("classof", method_pointer_565eed5e389e57a2af0b7d5539d7d068, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("is_sugared", method_pointer_da9048cbb5835ea8a3be0e79006b8c98, "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.def("get_decl", method_pointer_1336026df3b85ad680343ff451f13ad9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fec3f4f39b7458bf9ddad72041e2a6d0.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCInterfaceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCInterfaceType >, autowig::HeldType< class ::clang::ObjCObjectType > >();
    }

}