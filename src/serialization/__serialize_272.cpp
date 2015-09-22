
// Author: Christoph Lassner.
/**
 * This is an automatically generated file!
 */
#if defined SERIALIZATION_ENABLED
#include "../global.h"

#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/serialization/version.hpp>

#include "../leafs/boostingleafmanager.h"
#include "./_serialization_definition.h"

namespace fertilized {
  template <class Archive>
  void __serialization_register_272(Archive &ar,
                                          const bool &always_register,
                                          const unsigned int &serialization_library_version) {
    if (101 > FERTILIZED_LIB_VERSION()) {
        throw Fertilized_Exception("The serialization generation of the class "
          "BoostingLeafManager is higher than the current library version "
          "(101 > " + std::to_string(FERTILIZED_LIB_VERSION()) +
          ")! This will break serialization! Raise the library version in the file "
          "'global.h' to at least 101!");
    }
    if (always_register ||
        serialization_library_version >= 101) {
      ar.template register_type<BoostingLeafManager<
              int,
              uint
	  >>();
    }
  };
  TemplateFuncExport DllExport void __serialization_register_272(
      boost::archive::text_iarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);
  TemplateFuncExport DllExport void __serialization_register_272(
      boost::archive::text_oarchive &ar,
      const bool &always_register,
      const unsigned int &serialization_library_version);

    TemplateFuncExport DllExport std::string serialize(const BoostingLeafManager<
              int,
              uint
	  > *, const bool &);
    TemplateFuncExport DllExport BoostingLeafManager<
              int,
              uint
	  >* deserialize(std::stringstream &);
    TemplateFuncExport DllExport void deserialize(std::stringstream &, BoostingLeafManager<
              int,
              uint
	  >*);
}  // namespace fertilized

// For types, etc.
using namespace fertilized;
namespace boost {
namespace serialization {

template <>
struct version<BoostingLeafManager<
              int,
              uint
	  >> {
    typedef mpl::int_<FERTILIZED_VERSION_COUNT> type;
    typedef mpl::integral_c_tag tag;
    BOOST_STATIC_CONSTANT(int, value = version::type::value);
    BOOST_MPL_ASSERT((
        boost::mpl::less<
            boost::mpl::int_<FERTILIZED_VERSION_COUNT>,
            boost::mpl::int_<256>
        >
    ));
};
}
}

#endif  // SERIALIZATION_ENABLED