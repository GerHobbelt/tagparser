#include "./diagnostics.h"

using namespace std;

namespace TagParser {

/*!
 * \class DiagMessage
 * \brief The DiagMessage class holds an information, warning or error gathered during parsing or making.
 */

/*!
 * \class Diagnostics
 * \brief The Diagnostics class is a container for DiagMessage.
 * \remarks A lot of methods in this library take such a container as argument. The method will add additional
 *          information, warnings or errors to it.
 */

/*!
 * \brief Returns the string representation of the specified \a diagLevel.
 */
const char *diagLevelName(DiagLevel diagLevel)
{
    switch (diagLevel) {
    case DiagLevel::Information:
        return "information";
    case DiagLevel::Warning:
        return "warning";
    case DiagLevel::Critical:
        return "critical";
    case DiagLevel::None:
    default:
        return "";
    }
}

/*!
 * \brief Returns whether there's at least one DiagMessage which is at least as worse as \a level.
 */
bool Diagnostics::has(DiagLevel level) const
{
    for (const auto &msg : *this) {
        if (msg.level() >= level) {
            return true;
        }
    }
    return false;
}

/*!
 * \brief Returns the worst diag level present in the container.
 */
DiagLevel Diagnostics::level() const
{
    auto level = DiagLevel::None;
    for (const auto &msg : *this) {
        if ((level |= msg.level()) >= worstDiagLevel) {
            return level;
        }
    }
    return level;
}

} // namespace TagParser
