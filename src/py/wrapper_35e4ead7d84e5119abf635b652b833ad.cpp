#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_35e4ead7d84e5119abf635b652b833ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6fd28f6354e45fa1b2e5a002f6f6d1b3)(class ::clang::Type  const *) = ::clang::TagType::classof;
    class ::clang::TagDecl  * (::clang::TagType::*method_pointer_cbf66630b5cb589da7065fa0bdc1e6f1)() const = &::clang::TagType::getDecl;
    bool  (::clang::TagType::*method_pointer_e167a7cdc8b15bc89fa41a918aaa162b)() const = &::clang::TagType::isBeingDefined;
    boost::python::class_< class ::clang::TagType, autowig::HeldType< class ::clang::TagType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_35e4ead7d84e5119abf635b652b833ad("TagType", "", boost::python::no_init);
    class_35e4ead7d84e5119abf635b652b833ad.def("classof", method_pointer_6fd28f6354e45fa1b2e5a002f6f6d1b3, "");
    class_35e4ead7d84e5119abf635b652b833ad.def("get_decl", method_pointer_cbf66630b5cb589da7065fa0bdc1e6f1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_35e4ead7d84e5119abf635b652b833ad.def("is_being_defined", method_pointer_e167a7cdc8b15bc89fa41a918aaa162b, "");
    class_35e4ead7d84e5119abf635b652b833ad.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TagType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TagType >, autowig::HeldType< class ::clang::Type > >();
    }

}