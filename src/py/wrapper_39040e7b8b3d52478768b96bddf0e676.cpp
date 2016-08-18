#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_39040e7b8b3d52478768b96bddf0e676()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::ObjCCompatibleAliasDecl  * (*method_pointer_d491829d952152fcb1c118993fb947c8)(class ::clang::ASTContext  &, unsigned int ) = ::clang::ObjCCompatibleAliasDecl::CreateDeserialized;
    bool  (*method_pointer_df6c7650c56658439ae5885e8e09eb29)(class ::clang::Decl  const *) = ::clang::ObjCCompatibleAliasDecl::classof;
    bool  (*method_pointer_f057100efa3756f9aaa8bfba39910455)(enum ::clang::Decl::Kind ) = ::clang::ObjCCompatibleAliasDecl::classofKind;
    class ::clang::ObjCInterfaceDecl  * (::clang::ObjCCompatibleAliasDecl::*method_pointer_93e4c4cb7c465bd38e38b055dd3a9357)() = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ObjCCompatibleAliasDecl::*method_pointer_87438c9ac6ea53adb3577da3b27b7c5b)() const = &::clang::ObjCCompatibleAliasDecl::getClassInterface;
    void  (::clang::ObjCCompatibleAliasDecl::*method_pointer_f4bed2048b5b51268efa90b4c75c0af6)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ObjCCompatibleAliasDecl::setClassInterface;
    boost::python::class_< class ::clang::ObjCCompatibleAliasDecl, autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_39040e7b8b3d52478768b96bddf0e676("ObjCCompatibleAliasDecl", "", boost::python::no_init);
    class_39040e7b8b3d52478768b96bddf0e676.def("create_deserialized", method_pointer_d491829d952152fcb1c118993fb947c8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof", method_pointer_df6c7650c56658439ae5885e8e09eb29, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("classof_kind", method_pointer_f057100efa3756f9aaa8bfba39910455, "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_93e4c4cb7c465bd38e38b055dd3a9357, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("get_class_interface", method_pointer_87438c9ac6ea53adb3577da3b27b7c5b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39040e7b8b3d52478768b96bddf0e676.def("set_class_interface", method_pointer_f4bed2048b5b51268efa90b4c75c0af6, "");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof_kind");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("create_deserialized");
    class_39040e7b8b3d52478768b96bddf0e676.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ObjCCompatibleAliasDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}