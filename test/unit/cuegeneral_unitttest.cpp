#include "cue_testfixture"
class CueGeneralTests : public CueTest { };

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * CURRENTY DISABLED: Parser does not recognized
 * a cue with no payload as a cue, is returning 0
 * cues founf.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue
 * WHICH STATED:
 * A WebVTT cue consists of the following components, in the given order:
 * Optionally, a WebVTT cue identifier followed by a WebVTT line terminator.
 * WebVTT cue timings.
 * Optionally, one or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION 
 * (tab) characters followed by WebVTT cue settings.
 * A WebVTT line terminator.
 * The cue payload: either WebVTT cue text, WebVTT chapter title text, or WebVTT 
 * metadata text, but it must not contain the substring "-->" (U+002D HYPHEN-MINUS, 
 * U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * 
 * Each payload consists of "zero or more" objects, making
 * them optional.
*/
TEST_F(CueGeneralTests, DISABLED_BareMinimum)
{
  loadVtt("cue-general/bare_minimum.vtt", 1);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and sample content.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue
 * WHICH STATED:
 * A WebVTT cue consists of the following components, in the given order:
 * Optionally, a WebVTT cue identifier followed by a WebVTT line terminator.
 * WebVTT cue timings.
 * Optionally, one or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION 
 * (tab) characters followed by WebVTT cue settings.
 * A WebVTT line terminator.
 * The cue payload: either WebVTT cue text, WebVTT chapter title text, or WebVTT 
 * metadata text, but it must not contain the substring "-->" (U+002D HYPHEN-MINUS, 
 * U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
*/
TEST_F(CueGeneralTests, BareMinimumWithContent)
{
  loadVtt("cue-general/bare_minimum_content.vtt", 1);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests the highest legal values in a timestamp.
 * This does not included hours, as the highest legal value
 * of an hour would be the highest value of an int (system-dependent)
 * CURRENTY DISABLED: Parser does not recognized
 * a cue with no payload as a cue, is returning 0
 * cues founf.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-timestamp
 * WHICH STATED:
 * A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds, and thousandths of a 
 * second seconds-frac, consists of the following components, in the given order:
 * Optionally (required if hour is non-zero):
 * Two or more ASCII digits, representing the hours as a base ten integer.
 * A U+003A COLON character (:)
 * Two ASCII digits, representing the minutes as a base ten integer in the range 0 ≤ minutes ≤ 59.
 * A U+003A COLON character (:)
 * Two ASCII digits, representing the seconds as a base ten integer in the range 0 ≤ seconds ≤ 59.
 * A U+002E FULL STOP character (.).
 * Three ASCII digits, representing the thousandths of a second seconds-frac as a base ten integer.
*/
TEST_F(CueGeneralTests, DISABLED_HighestValues)
{
  loadVtt("cue-general/highest_values.vtt", 1);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests a bunch of space and tab characters in between
 * timestamp tokens
 * CURRENTY DISABLED: Parser does not recognized
 * a cue with no payload as a cue, is returning 0
 * cues founf.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
*/
TEST_F(CueGeneralTests, DISABLED_SpaceTabs)
{
  loadVtt("cue-general/space_tabs.vtt", 1);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests using tabs instead of sapces
 * in between timesetamp tokens
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
*/
TEST_F(CueGeneralTests, Tabs)
{
  loadVtt("cue-general/tabs.vtt", 1);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests the optional hours token in the timestamp
 * CURRENTY DISABLED: Parser does not recognized
 * a cue with no payload as a cue, is returning 0
 * cues founf.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-timestamp
 * WHICH STATED:
 * A WebVTT timestamp representing hours hours, minutes minutes, seconds seconds, 
 * and thousandths of a second seconds-frac, consists of the following components, in the given order:
 * Optionally (required if hour is non-zero):
 * Two or more ASCII digits, representing the hours as a base ten integer.
 * A U+003A COLON character (:)
 *.[...]
*/
TEST_F(CueGeneralTests, DISABLED_Hours)
{
  loadVtt("cue-general/hours.vtt", 1);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests multiple cues in a vtt file
 * DISABLED as it is returning an error count greater than
 * 0. Will have to debug when I have some time.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * [...]
*/
TEST_F(CueGeneralTests, DISABLED_MultiCues)
{
  loadVtt("cue-general/multicues.vtt", 2);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests nested cues.
 * DISABLED as it is returning an error count greater than
 * 0. Will have to debug when I have some time.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-file-using-only-nested-cues
 * WHICH STATED:
 * A WebVTT file whose cues all have an end time offset x greater than or equal to the end time offsets 
 * of all the cues whose start time offsets are less than x is said to be a WebVTT file using only nested cues.
*/
TEST_F(CueGeneralTests, DISABLED_NestedCues)
{
  loadVtt("cue-general/nestedcues.vtt", 6);
	ASSERT_EQ(0, errorCount()) << "This file should contain no errors.";
}

/*
 * This tests spaces missing between time stamp tokens
 * Because the parser does not validate, the parser should
 * attempt to parse this. Parse.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
 *
*/
TEST_F(CueGeneralTests, MissingSpaces)
{
  loadVtt("cue-general/missing_spaces.vtt", 1);
}

/*
 * This tests a missing space between left timestamp and arrow token
 * one cue and no content.
 * Because the parser does not validate, the parser should
 * attempt to parse this. Parse.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
 *
*/
TEST_F(CueGeneralTests, MissingSpaceLeft)
{
  loadVtt("cue-general/missing_space_left.vtt", 1);
}

/*
 * This tests a missing space between right timestamp and arrow token
 * one cue and no content.
 * Because the parser does not validate, the parser should
 * attempt to parse this. Parse.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
 *
*/
TEST_F(CueGeneralTests, MissingSpaceRight)
{
  loadVtt("cue-general/missing_space_right.vtt", 1);
}

/*
 * This tests the effect of non-numeric characters
 * in the timestamp.
 * one cue and no content.
 * Because the parser does not validate, the parser should
 * attempt to parse this. Parse.
 * CURRENTY DISABLED: Parser segmentation faults
 * when trying to parse timestamps and encountering
 * any character it is not expecting.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
 *
*/
TEST_F(CueGeneralTests, DISABLED_NoNumsInTimeStamp)
{
  loadVtt("cue-general/nonums_in_timestamp.vtt", 1);
  const Error& err = getError( 0 );
  ASSERT_EQ( WEBVTT_MALFORMED_TIMESTAMP, err.error() );
}

/*
 * This tests demonstrates that a WebVTT file
 * fails validation when the --> token is anything
 * but three characters in a row.
 * Because the parser does not validate, the parser should
 * attempt to parse this. Parse.
 * CURRENTY DISABLED: Parser does not recognized
 * a cue with no payload as a cue, is returning 0
 * cues founf.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * [...]
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * [...]
*/
TEST_F(CueGeneralTests, DISABLED_ArrowsWrongDirection)
{
  loadVtt("cue-general/arrows_wrong_direction.vtt", 1);
  const Error& err = getError( 0 );
  ASSERT_EQ( WEBVTT_MALFORMED_TIMESTAMP, err.error() );
}

/*
 * This tests demonstrates bad timestamps.
 * Because the parser does not validate, the parser should
 * attempt to parse this. Parse.
 * CURRENTY DISABLED: Parser segmentation faults
 * when trying to parse timestamps and encountering
 * any character it is not expecting.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
 *
*/
TEST_F(CueGeneralTests, DISABLED_BadTimeStamps1)
{
  loadVtt("cue-general/bad_timestamps_1.vtt", 1);
  const Error& err = getError( 0 );
  ASSERT_EQ( WEBVTT_MALFORMED_TIMESTAMP, err.error() );
}

/*
 * This tests demonstrates bad timestamps.
 * CURRENTY DISABLED: Parser segmentation faults
 * when trying to parse timestamps and encountering
 * any character it is not expecting.
 * ACCORDING TO WEBVTT SPEC DATE: 2012-12-12
 * http://dev.w3.org/html5/webvtt/#webvtt-cue-timings
 * WHICH STATED:
 * The WebVTT cue timings part of a WebVTT cue consists of the following components, in the given order:
 * A WebVTT timestamp representing the start time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than or equal to the start time offsets of all previous cues in the file.
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * The string "-->" (U+002D HYPHEN-MINUS, U+002D HYPHEN-MINUS, U+003E GREATER-THAN SIGN).
 * One or more U+0020 SPACE characters or U+0009 CHARACTER TABULATION (tab) characters.
 * A WebVTT timestamp representing the end time offset of the cue. The time represented by this WebVTT 
 * timestamp must be greater than the start time offset of the cue.
 *
*/
TEST_F(CueGeneralTests, DISABLED_BadTimeStamps2)
{
  loadVtt("cue-general/bad_timestamps_2.vtt", 1);
  const Error& err = getError( 0 );
  ASSERT_EQ( WEBVTT_MALFORMED_TIMESTAMP, err.error() );
}
