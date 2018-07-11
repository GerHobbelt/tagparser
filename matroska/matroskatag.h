#ifndef TAG_PARSER_MATROSKATAG_H
#define TAG_PARSER_MATROSKATAG_H

#include "./matroskatagfield.h"
#include "./matroskatagid.h"

#include "../fieldbasedtag.h"

namespace TagParser {

class EbmlElement;
class MatroskaTag;

class TAG_PARSER_EXPORT MatroskaTagMaker {
    friend class MatroskaTag;

public:
    void make(std::ostream &stream) const;
    const MatroskaTag &tag() const;
    uint64 requiredSize() const;

private:
    MatroskaTagMaker(MatroskaTag &tag, Diagnostics &diag);

    MatroskaTag &m_tag;
    uint64 m_targetsSize;
    uint64 m_simpleTagsSize;
    std::vector<MatroskaTagFieldMaker> m_maker;
    uint64 m_tagSize;
    uint64 m_totalSize;
};

/*!
 * \brief Returns the associated tag.
 */
inline const MatroskaTag &MatroskaTagMaker::tag() const
{
    return m_tag;
}

/*!
 * \brief Returns the number of bytes which will be written when making the tag.
 */
inline uint64 MatroskaTagMaker::requiredSize() const
{
    return m_totalSize;
}

/*!
 * \brief Defines traits for the TagField implementation of the MatroskaTag class.
 */
template <> class TAG_PARSER_EXPORT FieldMapBasedTagTraits<MatroskaTag> {
public:
    using FieldType = MatroskaTagField;
    using Compare = std::less<typename FieldType::IdentifierType>;
};

class TAG_PARSER_EXPORT MatroskaTag : public FieldMapBasedTag<MatroskaTag> {
    friend class FieldMapBasedTag<MatroskaTag>;

public:
    MatroskaTag();

    static constexpr TagType tagType = TagType::MatroskaTag;
    static constexpr const char *tagName = "Matroska tag";
    static constexpr TagTextEncoding defaultTextEncoding = TagTextEncoding::Utf8;
    bool canEncodingBeUsed(TagTextEncoding encoding) const;
    bool supportsTarget() const;
    TagTargetLevel targetLevel() const;

    void parse(EbmlElement &tagElement, Diagnostics &diag);
    MatroskaTagMaker prepareMaking(Diagnostics &diag);
    void make(std::ostream &stream, Diagnostics &diag);

protected:
    IdentifierType internallyGetFieldId(KnownField field) const;
    KnownField internallyGetKnownField(const IdentifierType &id) const;

private:
    void parseTargets(EbmlElement &targetsElement, Diagnostics &diag);
};

/*!
 * \brief Constructs a new tag.
 */
inline MatroskaTag::MatroskaTag()
{
}

inline bool MatroskaTag::supportsTarget() const
{
    return true;
}

inline TagTargetLevel MatroskaTag::targetLevel() const
{
    return matroskaTagTargetLevel(m_target.level());
}

/*!
 * \brief Prepares making.
 * \returns Returns a MatroskaTagMaker object which can be used to actually make the tag.
 * \remarks The tag must NOT be mutated after making is prepared when it is intended to actually
 *          make the tag using the make() method of the returned object.
 * \throws Throws TagParser::Failure or a derived exception when a making error occurs.
 *
 * This method might be useful when it is necessary to know the size of the tag before making it.
 * \sa make()
 */
inline MatroskaTagMaker MatroskaTag::prepareMaking(Diagnostics &diag)
{
    return MatroskaTagMaker(*this, diag);
}

/*!
 * \brief Writes tag information to the specified \a stream (makes a "Tag"-element).
 * \throws Throws std::ios_base::failure when an IO error occurs.
 * \throws Throws TagParser::Failure or a derived exception when a making
 *                error occurs.
 * \sa prepareMaking()
 */
inline void MatroskaTag::make(std::ostream &stream, Diagnostics &diag)
{
    prepareMaking(diag).make(stream);
}

inline bool MatroskaTag::canEncodingBeUsed(TagTextEncoding encoding) const
{
    return encoding == TagTextEncoding::Utf8;
}

} // namespace TagParser

#endif // TAG_PARSER_MATROSKATAG_H
