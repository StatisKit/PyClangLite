#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_f301756c73b6518392c0b1c3e424eedd()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ObjCTypeParamDecl::*method_pointer_05db07ff7afc5cc5b5ffb463e282fa57)() const = &::clang::ObjCTypeParamDecl::hasExplicitBound;
    class ::clang::ObjCTypeParamDecl  * (*method_pointer_58ad705085155a3fa09954943a916f24)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCTypeParamDecl::CreateDeserialized;
    bool  (*method_pointer_e52b8434962a5003a95de5029f2b32e5)(class ::clang::Decl  const *) = ::clang::ObjCTypeParamDecl::classof;
    bool  (*method_pointer_7ce02317057259c6b9b745e029c86e45)(enum ::clang::Decl::Kind ) = ::clang::ObjCTypeParamDecl::classofKind;
    unsigned int  (::clang::ObjCTypeParamDecl::*method_pointer_f484fa4ae13f58adade8335f583236f2)() const = &::clang::ObjCTypeParamDecl::getIndex;
    boost::python::class_< class ::clang::ObjCTypeParamDecl, autowig::HeldType< class ::clang::ObjCTypeParamDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_f301756c73b6518392c0b1c3e424eedd("ObjCTypeParamDecl", "", boost::python::no_init);
    class_f301756c73b6518392c0b1c3e424eedd.def("has_explicit_bound", method_pointer_05db07ff7afc5cc5b5ffb463e282fa57, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("create_deserialized", method_pointer_58ad705085155a3fa09954943a916f24, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof", method_pointer_e52b8434962a5003a95de5029f2b32e5, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("classof_kind", method_pointer_7ce02317057259c6b9b745e029c86e45, "");
    class_f301756c73b6518392c0b1c3e424eedd.def("get_index", method_pointer_f484fa4ae13f58adade8335f583236f2, "");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof_kind");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("create_deserialized");
    class_f301756c73b6518392c0b1c3e424eedd.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCTypeParamDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCTypeParamDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}