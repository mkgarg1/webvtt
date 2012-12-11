#include "cue_testfixture"
class CueGeneralTests : public CueTest { };

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, BareMinimum)
{
  loadVtt("cue-general/bare_minimum.vtt", 1);
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and sample content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, BareMinimumWithContent)
{
  loadVtt("cue-general/bare_minimum_content.vtt", 1);
}

/*
 * This tests the highest legal values in a timestamp.
 * This does not included hours, as the highest legal value
 * of an hour would be the highest value of an int (system-dependent)
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, HighestValues)
{
  loadVtt("cue-general/highest_values.vtt", 1);
}

/*
 * This tests a bunch of space and tab characters in between
 * timestamp tokens
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, SpaceTabs)
{
  loadVtt("cue-general/space_tabs.vtt", 1);
}

/*
 * This tests using tabs instead of sapces
 * in between timesetamp tokens
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, Tabs)
{
  loadVtt("cue-general/tabs.vtt", 1);
}

/*
 * This tests the optional hours token in the timestamp
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, Hours)
{
  loadVtt("cue-general/hours.vtt", 1);
}

/*
 * This tests multiple cues in a vtt file
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, MultiCues)
{
  loadVtt("cue-general/multicues.vtt", 2);
}

/*
 * This tests nested cues.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, NestedCues)
{
  loadVtt("cue-general/nestedcues.vtt", 6);
}

/*
 * This tests spaces missing between time stamp tokens
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, MissingSpaces)
{
  loadVtt("cue-general/missing_spaces.vtt", 1);
}

/*
 * This tests a missing space between left timestamp and arrow token
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, MissingSpaceLeft)
{
  loadVtt("cue-general/missing_space_left.vtt", 1);
}

/*
 * This tests a missing space between right timestamp and arrow token
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
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
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, DISABLED_NoNumsInTimeStamp)
{
  loadVtt("cue-general/nonums_in_timestamp.vtt", 1);
}

/*
 * This tests demonstrates that a WebVTT file
 * fails validation when the --> token is anything
 * but three characters in a row.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, ArrowsWrongDirection)
{
  loadVtt("cue-general/arrows_wrong_direction.vtt", 1);
}

/*
 * This tests demonstrates bad timestamps.
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, DISABLED_BadTimeStamps1)
{
  loadVtt("cue-general/bad_timestamps_1.vtt", 1);
}

/*
 * This tests demonstrates bad timestamps.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, DISABLED_BadTimeStamps2)
{
  loadVtt("cue-general/bad_timestamps_2.vtt", 1);
}
