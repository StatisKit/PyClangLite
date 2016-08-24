#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_5578de9a4833559791574e29dbc59084()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::AccessSpecDecl  * (*method_pointer_ed3e3233b3de5661a4ea6de4190c00e3)(class ::clang::ASTContext  &, enum ::clang::AccessSpecifier , class ::clang::DeclContext  *, class ::clang::SourceLocation , class ::clang::SourceLocation ) = ::clang::AccessSpecDecl::Create;
    class ::clang::AccessSpecDecl  * (*method_pointer_dd2977657d845f0fb9e57eb4605e2401)(class ::clang::ASTContext  &, unsigned int ) = ::clang::AccessSpecDecl::CreateDeserialized;
    bool  (*method_pointer_3046e8cbfda35627832b45d0a6f5d13f)(class ::clang::Decl  const *) = ::clang::AccessSpecDecl::classof;
    bool  (*method_pointer_d810f98b1c5e5017907280bfea688464)(enum ::clang::Decl::Kind ) = ::clang::AccessSpecDecl::classofKind;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_c8c3c9a0eb0c5004b381f081f410ed19)() const = &::clang::AccessSpecDecl::getAccessSpecifierLoc;
    class ::clang::SourceLocation  (::clang::AccessSpecDecl::*method_pointer_ab9cff45af8b5715bb114f0419c005f7)() const = &::clang::AccessSpecDecl::getColonLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_77e41385341c5a3c9e437c041340da5d)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setAccessSpecifierLoc;
    void  (::clang::AccessSpecDecl::*method_pointer_87170b6b24405e78ba234014a8798075)(class ::clang::SourceLocation ) = &::clang::AccessSpecDecl::setColonLoc;
    boost::python::class_< class ::clang::AccessSpecDecl, autowig::HeldType< class ::clang::AccessSpecDecl >, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_5578de9a4833559791574e29dbc59084("AccessSpecDecl", "", boost::python::no_init);
    class_5578de9a4833559791574e29dbc59084.def("create", method_pointer_ed3e3233b3de5661a4ea6de4190c00e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("create_deserialized", method_pointer_dd2977657d845f0fb9e57eb4605e2401, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5578de9a4833559791574e29dbc59084.def("classof", method_pointer_3046e8cbfda35627832b45d0a6f5d13f, "");
    class_5578de9a4833559791574e29dbc59084.def("classof_kind", method_pointer_d810f98b1c5e5017907280bfea688464, "");
    class_5578de9a4833559791574e29dbc59084.def("get_access_specifier_loc", method_pointer_c8c3c9a0eb0c5004b381f081f410ed19, "");
    class_5578de9a4833559791574e29dbc59084.def("get_colon_loc", method_pointer_ab9cff45af8b5715bb114f0419c005f7, "");
    class_5578de9a4833559791574e29dbc59084.def("set_access_specifier_loc", method_pointer_77e41385341c5a3c9e437c041340da5d, "");
    class_5578de9a4833559791574e29dbc59084.def("set_colon_loc", method_pointer_87170b6b24405e78ba234014a8798075, "");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof_kind");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create");
    class_5578de9a4833559791574e29dbc59084.staticmethod("create_deserialized");
    class_5578de9a4833559791574e29dbc59084.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AccessSpecDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AccessSpecDecl >, autowig::HeldType< class ::clang::Decl > >();
    }

}