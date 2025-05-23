#ifndef TAG_PARSER_ID3V2FRAMEIDS_H
#define TAG_PARSER_ID3V2FRAMEIDS_H

#include "../global.h"

#include <cstdint>

#include <string>

namespace TagParser {

namespace Id3v2FrameIds {
enum KnownValue : std::uint32_t {
    lAlbum = 0x54414c42, /**< TALB */
    lArtist = 0x54504531, /**< TPE1 */
    lComment = 0x434f4d4d, /**< COMM */
    lYear = 0x54594552, /**< TYER */
    lOriginalYear = 0x544F5259, /**< TORY */
    lRecordingDates = 0x54524441, /**< TRDA */
    lDate = 0x54444154, /**< TDAT */
    lTime = 0x54494D45, /**< TIME */
    lRecordingTime = 0x54445243, /**< TDRC */
    lReleaseTime = 0x5444524C, /**< TDRL */
    lOriginalReleaseTime = 0x54444F52, /**< TDOR */
    lOriginalMediaType = 0x544D4544, /**< TMED */
    lTaggingTime = 0x54445447, /**< TDTG */
    lGenre = 0x54434f4e, /**< TCON */
    lTrackPosition = 0x5452434b, /**< TRCK */
    lDiskPosition = 0x54504f53, /**< TPOS */
    lEncoder = 0x54454e43, /**< TENC */
    lBpm = 0x5442504d, /**< TBPM */
    lCover = 0x41504943, /**< APIC */
    lWriter = 0x54455854, /**< TEXT */
    lLength = 0x544c454e, /**< TLEN */
    lLanguage = 0x544c414e, /**< TLAN */
    lEncoderSettings = 0x54535345, /**< TSSE */
    lUnsynchronizedLyrics = 0x55534c54, /**< USLT */
    lSynchronizedLyrics = 0x53594C54, /**< SYLT */
    lAlbumArtist = 0x54504532, /**< TPE2 */
    lContentGroupDescription = 0x54495431, /**< TIT1 */
    lTitle = 0x54495432, /**< TIT2 */
    lSubtitleOrDescriptionRefinement = 0x54495433, /**< TIT3 */
    lLongDescription = 0x54444553, /**< TDES */
    lRecordLabel = 0x54505542, /**< TPUB \todo rename to lPublisher in v12 */
    lUniqueFileId = 0x55464944, /**< UFID */
    lComposer = 0x54434f4d, /**< TCOM */
    lPlayCounter = 0x50434E54, /**< PCNT */
    lRating = 0x504f504d, /**< POPM */
    lRemixedBy = 0x54504534, /**< TPE4 */
    lCopyright = 0x54434F50, /**< TCOP */
    lEncodingTime = 0x5444454E, /**< TDEN */
    lMood = 0x544D4F4F, /**< TMOO */
    lISRC = 0x54535243, /**< TSRC */
    lKey = 0x544B4559, /**< TKEY */
    lUserDefinedText = 0x54585858, /**< TXXX */
    lCommericalInfoWebpage = 0x57434F4D, /**< WCOM */
    lCopyrightInfoWebpage = 0x57434F50, /**< WCOP */
    lAudioFileWebpage = 0x574F4146, /**< WOAF */
    lAudioSourceWebpage = 0x574F4153, /**< WOAS */
    lInternetRadioStationWebpage = 0x574F5253, /**< WORS */
    lPaymentWebpage = 0x57504159, /**< WPAY */
    lPublisherWebpage = 0x57505542, /**< WPUB */
    lPerformerWebpage = 0x574F4152, /**< WOAR */
    lUserDefinedURL = 0x57585858, /**< WXXX */

    sAlbum = 0x54414c, /**< ?TAL */
    sArtist = 0x545031, /**< ?TP1 */
    sComment = 0x434f4d, /**< ?COM */
    sYear = 0x545945, /**< ?TYE */
    sOriginalYear = 0x544F52, /**< ?TOR */
    sOriginalMediaType = 0x544D54, /**< ?TMT */
    sRecordingDates = 0x545244, /**< ?TRD */
    sDate = 0x544441, /**< ?TDA */
    sTime = 0x54494D, /**< ?TIM */
    sGenre = 0x54434f, /**< ?TCO */
    sTrackPosition = 0x54524b, /**< ?TRK */
    sDiskPosition = 0x545041, /**< ?TPA */
    sEncoder = 0x54454e, /**< ?TEN */
    sBpm = 0x544250, /**< ?TBP */
    sCover = 0x504943, /**< ?PIC */
    sWriter = 0x545854, /**< ?TXT */
    sLength = 0x544c45, /**< ?TLE */
    sLanguage = 0x544c41, /**< ?TLA */
    sEncoderSettings = 0x545353, /**< ?TSS */
    sUnsynchronizedLyrics = 0x554C54, /**< ?ULT */
    sSynchronizedLyrics = 0x534C54, /**< ?SLT */
    sAlbumArtist = 0x545032, /**< ?TP2 */
    sContentGroupDescription = 0x545431, /**< ?TT1 */
    sTitle = 0x545432, /**< ?TT2 */
    sSubtitleOrDescriptionRefinement = 0x545433, /**< ?TT3 */
    sRecordLabel = 0x545042, /**< ?TPB \todo rename to sPublisher in v12 */
    sUniqueFileId = 0x554649, /**< ?UFI */
    sComposer = 0x54434d, /**< ?TCM */
    sPlayCounter = 0x434E54, /**< CNT */
    sRating = 0x504f50, /**< ?POP */
    sRemixedBy = 0x545034, /**< TP4 */
    sCopyright = 0x544352, /**< TCR */
    sISRC = 0x545243, /**< TRC */
    sKey = 0x544B45, /**< TKE */
    sUserDefinedText = 0x545858, /**< ?TXX */
    sCommericalInfoWebpage = 0x57434D, /**< ?WCM */
    sCopyrightInfoWebpage = 0x574350, /**< ?WCP */
    sAudioFileWebpage = 0x574146, /**< ?WAF*/
    sAudioSourceWebpage = 0x574153, /**< ?WAS */
    sPublisherWebpage = 0x575042, /**< ?WPB */
    sPerformerWebpage = 0x574152, /**< ?WAR */
    sUserDefinedURL = 0x575858, /**< ?WXX */
};

TAG_PARSER_EXPORT std::uint32_t convertToShortId(std::uint32_t id);
TAG_PARSER_EXPORT std::uint32_t convertToLongId(std::uint32_t id);
TAG_PARSER_EXPORT bool isPreId3v24Id(std::uint32_t id);
TAG_PARSER_EXPORT bool isOnlyId3v24Id(std::uint32_t id);

/*!
 * \brief Returns an indication whether the specified \a id is a long frame id.
 */
constexpr bool isLongId(std::uint32_t id)
{
    return (id & 0x00ffffff) != id;
}

/*!
 * \brief Returns an indication whether the specified \a id is a short frame id.
 */
constexpr bool isShortId(std::uint32_t id)
{
    return (id & 0x00ffffff) == id;
}

/*!
 * \brief Returns an indication whether the specified \a id is a text frame id.
 */
constexpr bool isTextFrame(std::uint32_t id)
{
    if (isShortId(id)) {
        return ((id & 0x00FF0000u) == 0x00540000u) && (id != Id3v2FrameIds::sUserDefinedText);
    } else {
        return (id & 0xFF000000u) == 0x54000000u && (id != Id3v2FrameIds::lUserDefinedText);
    }
}

/*!
 * \brief Returns an indication whether the specified \a id is a URL frame id.
 */
constexpr bool isUrlFrame(std::uint32_t id)
{
    if (isShortId(id)) {
        return ((id & 0x00FF0000u) == 0x00570000u) && (id != Id3v2FrameIds::sUserDefinedURL);
    } else {
        return (id & 0xFF000000u) == 0x57000000u && (id != Id3v2FrameIds::lUserDefinedURL);
    }
}

} // namespace Id3v2FrameIds

} // namespace TagParser
#endif // TAG_PARSER_ID3V2FRAMEIDS_H
