#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_1d580556003654da9f00e93300e8c7d9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_d33dfd136b7a59b8a729fa67ac52b1a9)(class ::clang::Type  const *) = ::clang::AttributedType::classof;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_45508b05b9a1526ebe5e5d43517d2a9f)() const = &::clang::AttributedType::desugar;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_c5332de5d1e25ba39217e04540233979)() const = &::clang::AttributedType::getEquivalentType;
    class ::clang::QualType  (::clang::AttributedType::*method_pointer_0a45b2ae586f58f4b205fa1e55a87401)() const = &::clang::AttributedType::getModifiedType;
    bool  (::clang::AttributedType::*method_pointer_eeddd13b9d7058bebba2626a9ba85e16)() const = &::clang::AttributedType::isCallingConv;
    bool  (::clang::AttributedType::*method_pointer_a2147e7b33de54e6b2b5654ab68bc265)() const = &::clang::AttributedType::isMSTypeSpec;
    bool  (::clang::AttributedType::*method_pointer_5802016d3bc25e988f0a1eba9a8045f9)() const = &::clang::AttributedType::isQualifier;
    bool  (::clang::AttributedType::*method_pointer_7c904bf27f2f54cdac472885c7e4a3b2)() const = &::clang::AttributedType::isSugared;
    boost::python::class_< class ::clang::AttributedType, autowig::HeldType< class ::clang::AttributedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1d580556003654da9f00e93300e8c7d9("AttributedType", "", boost::python::no_init);
    class_1d580556003654da9f00e93300e8c7d9.def("classof", method_pointer_d33dfd136b7a59b8a729fa67ac52b1a9, "");
    class_1d580556003654da9f00e93300e8c7d9.def("desugar", method_pointer_45508b05b9a1526ebe5e5d43517d2a9f, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_equivalent_type", method_pointer_c5332de5d1e25ba39217e04540233979, "");
    class_1d580556003654da9f00e93300e8c7d9.def("get_modified_type", method_pointer_0a45b2ae586f58f4b205fa1e55a87401, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_calling_conv", method_pointer_eeddd13b9d7058bebba2626a9ba85e16, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_ms_type_spec", method_pointer_a2147e7b33de54e6b2b5654ab68bc265, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_qualifier", method_pointer_5802016d3bc25e988f0a1eba9a8045f9, "");
    class_1d580556003654da9f00e93300e8c7d9.def("is_sugared", method_pointer_7c904bf27f2f54cdac472885c7e4a3b2, "");
    class_1d580556003654da9f00e93300e8c7d9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AttributedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AttributedType >, autowig::HeldType< class ::clang::Type > >();
    }

}