#include "cue_testfixture"
class GeneralFileStructureGood : public CueTest{ };

/*
 This makes sure that the WEBVTT header can be followed by a space.
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
    1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
    2.  The string "WEBVTT".
    3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
    4.  Two or more WebVTT line terminators.
    5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
    6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_WebvttNoBOM)
{
	loadVtt( "general-file-structure/good/webvtt_no_bom.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}

/*
 This test makes sure that WEBVTT files can start with the bom charecter.
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_WebvttWithBOM)
{
	loadVtt( "general-file-structure/good/webvtt_with_bom.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}


/*
 This makes sure that a proper WEBVTT header is read.
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_WebvttHead)
{
	loadVtt( "general-file-structure/good/webvtt_head.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}

/*
 This test is to make sure a WEBVTT header can be followed by a space. 
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_WebvttSpace)
{
	loadVtt( "general-file-structure/good/webvtt_space.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}


/*
 This makes sure that a WEBVTT header can be followed by a TAB.
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_WebvttTab)
{
	loadVtt( "general-file-structure/good/webvtt_tab.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}

/*
 This test is to check for text after a space with a proper WEBVTT headder. 
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_WebvttSpaceText)
{
	loadVtt( "general-file-structure/good/webvtt_space_text.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}

/*
 This test checks for the possibility of tab and text after a proper WEBVTT header.
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_WebvttTabText)
{
	loadVtt( "general-file-structure/good/webvtt_tab_text.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}

/*
 Missing the text line in between two cue identifiers
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_MissingTextLineBetweenCues)
{
	loadVtt( "general-file-structure/good/missing_line_between_cues.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}

/*
 Test expecting parser to succeed if a bunch of new lines at the bottom of file exists.
 
 From http://dev.w3.org/html5/webvtt/#the-webvtt-file-format
 A WebVTT file must consist of a WebVTT file body encoded as UTF-8 and labeled with the MIME type text/vtt. [RFC3629]
 
 A WebVTT file body consists of the following components, in the following order:
 
 1.  An optional U+FEFF BYTE ORDER MARK (BOM) character.
 2.  The string "WEBVTT".
 3.  Optionally, either a U+0020 SPACE character or a U+0009 CHARACTER TABULATION (tab) character followed by any number of characters that are not U+000A LINE FEED (LF) or U+000D CARRIAGE RETURN (CR) characters.
 4.  Two or more WebVTT line terminators.
 5.  Zero or more WebVTT cues and/or WebVTT comments separated from each other by two or more WebVTT line terminators.
 6.  Zero or more WebVTT line terminators.
 */
TEST_F(GeneralFileStructureGood, DISABLED_NewLinesAtTheEnd)
{
	loadVtt( "general-file-structure/good/new_lines_at_end.vtt");
	ASSERT_EQ(0, errorCount()) <<"This file should contain no errors.";
}
