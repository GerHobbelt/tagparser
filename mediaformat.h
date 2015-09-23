#ifndef MEDIAFORMAT_H
#define MEDIAFORMAT_H

#include <c++utilities/application/global.h>

#include <utility>

namespace Media {

/*!
 * \brief The MediaType enum specifies the type of media data (audio, video, text, ...).
 */
enum class MediaType
{
    Unknown,
    Audio,
    Video,
    Text,
    Hint
};

/*!
 * \brief The GeneralMediaFormat enum specifies the general format of media data (PCM, MPEG-4, PNG, ...).
 */
enum class GeneralMediaFormat
{
    Unknown,
    Aac, /**< Advanced Video Coding */
    Ac3, /**< Dolby Digital */
    Ac4, /**< AC-4 */
    AdpcmAcm, /**< ADPCM ACM */
    AfxStream, /**< AFX Stream */
    Alac, /**< Apple Lossless Audio Codec */
    Als, /**< ALS */
    Amr, /** < AMR */
    Avc, /** < Advanced Video Coding */
    Bitmap, /**< Windows Bitmap */
    Dirac, /**< Dirac */
    Dts, /**< DTS */
    DtsHd, /**< DTS-HD */
    EAc3, /**< Dolby Digital Plus */
    Evrc, /**< EVRC */
    Flac, /**< FLAC */
    FontDataStream, /**< Font Data Stream */
    Gif, /**< GIF */
    Gpp2Cmf, /**< 3GPP2 Compact Multimedia Format (CMF) */
    Hevc, /**< H.265/High Efficiency Video Coding */
    ImaadpcmAcm, /**< IMAADPCM ACM */
    ImageSubtitle, /**< Image subtitle */
    InteractionStream, /**< Interaction Stream */
    Jpeg, /**< JPEG */
    OggKate, /**< Karaoke And Text Encapsulation */
    MicrosoftAudioCodecManager, /**< Microsoft Audio Codec Manager (ACM) */
    MicrosoftVideoCodecManager, /**< Microsoft Video Codec Manager (VCM) */
    DolbyMlp, /** < Dolby MLP */
    Mpeg1Audio, /**< MPEG-1 Audio */
    Mpeg1Video, /**< MPEG-1 Vudio */
    Mpeg2Audio, /**< MPEG-2 Audio */
    Mpeg2Video, /**< MPEG-2 Vudio */
    Mpeg4Video, /**< MPEG-4 */
    Mpc, /**< Musepack */
    Pcm, /**< Pulse Code Modulation */
    Png, /**< PNG */
    ProRes, /**< ProRes */
    Qcelp, /**< QCELP */
    QuicktimeAudio, /**< Quicktime Audio */
    QuicktimeVideo, /**< Quicktime Video */
    RealAudio, /**< Real Audio */
    RealVideo, /**< Real Video */
    Sa0c, /**< SAOC */
    Smv, /**< SMV */
    StreamingTextStream, /**< Streaming Text Stream */
    SynthesizedTextureStream, /**< Synthesized Texture Stream */
    Systems, /**< Systems */
    TextSubtitle, /**< Text subtitle */
    Theora, /**< Theora */
    Tiff, /**< TIFF */
    TimedText, /** < Timed Text */
    Tta, /**< The True Audio lessles audio compressor */
    UncompressedVideoFrames, /**< uncompressed RGB */
    Vc1, /**< VC-1 */
    VobBtn, /**< VobBtn */
    VobSub, /**< VobSub */
    Vorbis, /**< Vorbis */
    Vp8, /** < VP8 */
    Vp9, /** < VP9 */
    WavPack, /**< WavPack */
    WindowsMediaAudio /**< Windows Media Audio */
};

/*!
 * \brief Encapsulates sub formats.
 *
 * For instance "Layer 3" is a sub format of MPEG-1 audio.
 */
namespace SubFormats {

enum : unsigned char {
    None
};

enum Mpeg1AudioLayer : unsigned char {
    Mpeg1Layer1 = 1,
    Mpeg1Layer2,
    Mpeg1Layer3
};

enum AacProfile : unsigned char {
    AacMpeg2MainProfile = 1,
    AacMpeg2LowComplexityProfile,
    AacMpeg2ScalableSamplingRateProfile,
    AacMpeg4MainProfile,
    AacMpeg4LowComplexityProfile,
    AacMpeg4ScalableSamplingRateProfile,
    AacMpeg4LongTermPrediction,
    AacMpeg4ERLowComplecityProfile,
    AacMpeg4ERScalableSampingRateProfile,
    AacMpeg4ERLongTermPrediction,
    AacMpeg4ERLowDelay,
    AacMpeg4EREnhancedLowDelay
};

enum Mpeg2VideoProfile : unsigned char {
    Mpeg2SimpleProfile = 1,
    Mpeg2MainProfile,
    Mpeg2SnrProfile,
    Mpeg2SpatialProfile,
    Mpeg2HighProfile,
    Mpeg2422Profile
};

enum Mpeg4VideoProfile : unsigned char {
    Mpeg4SimpleProfile1 = 0x01,
    Mpeg4SimpleProfile2 = 0x02,
    Mpeg4SimpleProfile3 = 0x03,
    Mpeg4SimpleProfile0 = 0x08,
    Mpeg4SimpleScalableProfile0 = 0x10,
    Mpeg4SimpleScalableProfile1 = 0x11,
    Mpeg4SimpleScalableProfile2 = 0x12,
    Mpeg4CoreProfile1 = 0x21,
    Mpeg4CoreProfiel2 = 0x22,
    Mpeg4MainProfile2 = 0x32,
    Mpeg4MainProfile3 = 0x33,
    Mpeg4MainProfile4 = 0x34,
    Mpeg4NBitPrifle2 = 0x42,
    Mpeg4ScalableTextureProfile1 = 0x51,
    Mpeg4SimpleFaceAnimationProfile1 = 0x61,
    Mpeg4SimpleFaceAnimationProfile2 = 0x62,
    Mpeg4SimpleFbaProfile1 = 0x63,
    Mpeg4SimpleFbaProfile2 = 0x64,
    Mpeg4BasicAnimatedTextureProfiel1 = 0x71,
    Mpeg4BasicAnimatedTextureProfiel2 = 0x72,
    Mpeg4AvcProfile = 0x7F,
    Mpeg4HybridProfile1 = 0x81,
    Mpeg4HybridProfile2 = 0x82,
    Mpeg4AdvancedRealTimeSimpleProfile1 = 0x91,
    Mpeg4AdvancedRealTimeSimpleProfile2 = 0x92,
    Mpeg4AdvancedRealTimeSimpleProfile3 = 0x93,
    Mpeg4AdvancedRealTimeSimpleProfile4 = 0x94,
    Mpeg4CoreScalableProfile1 = 0xA1,
    Mpeg4CoreScalableProfile2 = 0xA2,
    Mpeg4CoreScalableProfile3 = 0xA3,
    Mpeg4AdvancedCodingEfficiencyProfile1 = 0xB1,
    Mpeg4AdvancedCodingEfficiencyProfile2 = 0xB2,
    Mpeg4AdvancedCodingEfficiencyProfile3 = 0xB3,
    Mpeg4AdvancedCodingEfficiencyProfile4 = 0xB4,
    Mpeg4AdvancedCoreProfile1 = 0xC1,
    Mpeg4AdvancedCoreProfile2 = 0xC2,
    Mpeg4AdvancedScalableTexture1 = 0xD1,
    Mpeg4AdvancedScalableTexture2 = 0xD2,
    Mpeg4SimpleStudioProfile1 = 0xE1,
    Mpeg4SimpleStudioProfile2 = 0xE2,
    Mpeg4SimpleStudioProfile3 = 0xE3,
    Mpeg4SimpleStudioProfile4 = 0xE4,
    Mpeg4CoreStudioProfile1 = 0xE5,
    Mpeg4CoreStudioProfile2 = 0xE6,
    Mpeg4CoreStudioProfile3 = 0xE7,
    Mpeg4CoreStudioProfile4 = 0xE8,
    Mpeg4AdvancedSimpleProfile0 = 0xF0,
    Mpeg4AdvancedSimpleProfile1 = 0xF1,
    Mpeg4AdvancedSimpleProfile2 = 0xF2,
    Mpeg4AdvancedSimpleProfile3 = 0xF3,
    Mpeg4AdvancedSimpleProfile4 = 0xF4,
    Mpeg4AdvancedSimpleProfile5 = 0xF5,
    Mpeg4AdvancedSimpleProfile3b = 0xF7,
    Mpeg4FineGranularityScalableProfile0 = 0xF8,
    Mpeg4FineGranularityScalableProfile1 = 0xF9,
    Mpeg4FineGranularityScalableProfile2 = 0xFA,
    Mpeg4FineGranularityScalableProfile3 = 0xFB,
    Mpeg4FineGranularityScalableProfile4 = 0xFC,
    Mpeg4FineGranularityScalableProfile5 = 0xFD
};

enum AvcProfile : unsigned char {
    AvcBaselineProfile = 0x42,
    AvcMainProfile = 0x4D,
    AvcScalableBaselineProfile = 0x53,
    AvcScalableHighProfile = 0x56,
    AvcExtendedProfile = 0x58,
    AvcHighProfile = 0x64,
    AvcHigh10Profile = 0x6E,
    AvcHigh422Profile = 0x7A,
    AvcHigh444Profile = 0x90
};

enum DtsSpecifier : unsigned char {
    DtsExpress = 1,
    DtsLossless,
    DtsHdHighResolution,
    DtsHdMasterAudio,
};

enum PcmVersion : unsigned char {
    PcmIntBe = 1,
    PcmIntLe,
    PcmFloatIeee
};

enum TextSubtitle : unsigned char {
    TextSubBasicUtf8 = 1,
    TextSubSubtitlesFormat,
    TextSubAdvancedSubtitlesFormat,
    TextSubUniversalSubtitleFormat
};

enum ImageSubtitle : unsigned char {
    ImgSubBmp = 1
};

}

/*!
 * \brief Encapsulates extension formats.
 */
namespace ExtensionFormats {
enum AudioFormatExtensions : unsigned char {
    SpectralBandReplication = 1,
    ParametricStereo = 2
};
}

class LIB_EXPORT MediaFormat
{
public:
    MediaFormat(GeneralMediaFormat general = GeneralMediaFormat::Unknown, unsigned char sub = 0, unsigned char extension = 0);

    const char *name() const;
    const char *abbreviation() const;
    const char *extensionName() const;
    operator bool() const;
    MediaFormat &operator+=(const MediaFormat &other);

    GeneralMediaFormat general;
    unsigned char sub;
    unsigned char extension;
};

/*!
 * \brief Constructs a new media format.
 */
inline MediaFormat::MediaFormat(GeneralMediaFormat general, unsigned char sub, unsigned char extension) :
    general(general),
    sub(sub),
    extension(extension)
{}

/*!
 * \brief "Adds" information from another instance to the object.
 */
inline MediaFormat &MediaFormat::operator+=(const MediaFormat &other)
{
    if(other) {
        general = other.general;
        if(other.sub) {
            sub = other.sub;
        }
        if(other.extension) {
            extension = other.extension;
        }
    }
    return *this;
}

/*!
 * \brief Returns whether the media format is known.
 */
inline MediaFormat::operator bool() const
{
    return general != GeneralMediaFormat::Unknown;
}

}

#endif // MEDIAFORMAT_H

