#include "cue_testfixture"
class GeneralFileStructureBad : public CueTest{ };

/*
 This test makes sure that there is a newline between the WEBVTT header and the cue.
 
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
TEST_F(GeneralFileStructureBad, DISABLED_HeaderNoNewLine)
{
	loadVtt( "general-file-structure/bad/header_no_new_line.vtt");
	ASSERT_EQ(3, errorCount()) <<"This file should fail the test because it doesn't have new line after WEBVTT.";
}

/*
 This test is to check for garbage before WEBVTT header.
 
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
TEST_F(GeneralFileStructureBad, DISABLED_TextBeforeWebvtt)
{
	loadVtt( "general-file-structure/bad/text_before_header.vtt");
	ASSERT_EQ(1, errorCount()) <<"This file should fail the test because it has text before the keyword WEBVTT.";
}

/*
 This is a test to make sure a new line would not occur before a WEBVTT header.
 
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
TEST_F(GeneralFileStructureBad, DISABLED_NewLineStart)
{
	loadVtt( "general-file-structure/bad/new_line_start.vtt");
	ASSERT_EQ(1, errorCount()) <<"This file should fail the test because it has a new line before WEBVTT.";
}

/*
 This test checks for a bom charecter followed by garbage data to make sure that a WEBVTT header follows the bom character and nothing else (garbage data).
 
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
TEST_F(GeneralFileStructureBad, DISABLED_BOMGarbageData)
{
	loadVtt( "general-file-structure/bad/bom_garbage_data.vtt");
	ASSERT_EQ(1, errorCount()) <<"This file should fail the test because it has garbage data";
}

/*
 This test checks for a tab after the bom charecter to make sure that trailing spaces after bom do  not make it pass.
 
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
TEST_F(GeneralFileStructureBad, DISABLED_BOMTabWebvtt)
{
	loadVtt( "general-file-structure/bad/bom_tab_webvtt.vtt");
	ASSERT_EQ(1, errorCount()) <<"This file should fail the test because it contains a tab before WEBVTT";
}

/*
 Test expected to fail when missing a new line between two cues
 
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
TEST_F(GeneralFileStructureBad, DISABLED_MissingNewLineBetweenCues)
{
	loadVtt( "general-file-structure/bad/missing_new_line_between_cues.vtt");
	ASSERT_EQ(1, errorCount()) <<"This file should fail the test because a blank line is missing between cues";
}

/*
 Test expected to fail if there is a line break between two text lines (cue payload)
 
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
TEST_F(GeneralFileStructureBad, DISABLED_LineBreakBetweenPayLoad)
{
	loadVtt( "general-file-structure/bad/line_break.vtt");
	ASSERT_EQ(1, errorCount()) <<"This file should fail the test because the cue payload has a blank line in it";
}
