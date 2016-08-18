#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_905349ffcd105c71941a2e3b1ec8ec3a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_f995bcad10dd5e3da61e371737cc82a0)(class ::clang::Decl  const *) = ::clang::DeclaratorDecl::classof;
    bool  (*method_pointer_2c8566bd34175fdf9dcc6683e9781a0a)(enum ::clang::Decl::Kind ) = ::clang::DeclaratorDecl::classofKind;
    unsigned int  (::clang::DeclaratorDecl::*method_pointer_9003876ae539500cb7a724f3b9ec2001)() const = &::clang::DeclaratorDecl::getNumTemplateParameterLists;
    boost::python::class_< class ::clang::DeclaratorDecl, autowig::HeldType< class ::clang::DeclaratorDecl >, boost::python::bases< class ::clang::ValueDecl >, boost::noncopyable > class_905349ffcd105c71941a2e3b1ec8ec3a("DeclaratorDecl", "", boost::python::no_init);
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof", method_pointer_f995bcad10dd5e3da61e371737cc82a0, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("classof_kind", method_pointer_2c8566bd34175fdf9dcc6683e9781a0a, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.def("get_num_template_parameter_lists", method_pointer_9003876ae539500cb7a724f3b9ec2001, "");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof_kind");
    class_905349ffcd105c71941a2e3b1ec8ec3a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::DeclaratorDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::DeclaratorDecl >, autowig::HeldType< class ::clang::ValueDecl > >();
    }

}