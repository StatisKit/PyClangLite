#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_0dd00d729e905a24a952147ef6cb1f26()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::StaticAssertDecl  * (*method_pointer_7bf60dba11b95deb90f1d816e3201dd8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::StaticAssertDecl::CreateDeserialized;
    bool  (*method_pointer_a53e08e8ece8529dbc7e913d04762849)(class ::clang::Decl  const *) = ::clang::StaticAssertDecl::classof;
    bool  (*method_pointer_3409701e416a542b90e9030ccbe18e7f)(enum ::clang::Decl::Kind ) = ::clang::StaticAssertDecl::classofKind;
    bool  (::clang::StaticAssertDecl::*method_pointer_cf5047ef932454bbb5c414946a9800c1)() const = &::clang::StaticAssertDecl::isFailed;
    boost::python::class_< class ::clang::StaticAssertDecl, autowig::HeldType< class ::clang::StaticAssertDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_0dd00d729e905a24a952147ef6cb1f26("StaticAssertDecl", "", boost::python::no_init);
    class_0dd00d729e905a24a952147ef6cb1f26.def("create_deserialized", method_pointer_7bf60dba11b95deb90f1d816e3201dd8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof", method_pointer_a53e08e8ece8529dbc7e913d04762849, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("classof_kind", method_pointer_3409701e416a542b90e9030ccbe18e7f, "");
    class_0dd00d729e905a24a952147ef6cb1f26.def("is_failed", method_pointer_cf5047ef932454bbb5c414946a9800c1, "");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof_kind");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("create_deserialized");
    class_0dd00d729e905a24a952147ef6cb1f26.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::StaticAssertDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::StaticAssertDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}