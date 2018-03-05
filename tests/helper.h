#ifndef TAGPARSER_TEST_HELPER
#define TAGPARSER_TEST_HELPER

#include "../tagvalue.h"
#include "../diagnostics.h"

#include <ostream>

namespace TestUtilities {

std::ostream &operator <<(std::ostream &os, const Media::TagTextEncoding &encoding);

/*!
 * \brief Prints a TagValue UTF-8 encoded to enable CPPUNIT_ASSERT_EQUAL for tag values.
 */
inline std::ostream &operator <<(std::ostream &os, const Media::TagValue &tagValue)
{
    return os << tagValue.toString(Media::TagTextEncoding::Utf8) << " (encoding: " << tagValue.dataEncoding() << ")";
}

/*!
 * \brief Prints a PositionInSet to enable using it in CPPUNIT_ASSERT_EQUAL.
 */
inline std::ostream &operator <<(std::ostream &os, const Media::PositionInSet &pos)
{
    return os << pos.toString();
}

/*!
 * \brief Prints a DiagMessage to enable using it in CPPUNIT_ASSERT_EQUAL.
 */
inline std::ostream &operator <<(std::ostream &os, const Media::DiagMessage &diagMessage)
{
    return os << diagMessage.levelName() << ':' << ' ' << diagMessage.message() << ' ' << '(' << diagMessage.context() << ')';
}

}

#endif // TAGPARSER_TEST_HELPER
