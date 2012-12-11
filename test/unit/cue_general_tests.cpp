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
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, Tabs)
{
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, Hours)
{
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, MultiCues)
{
///  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, NestedCues)
{
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, MissingSpaces)
{
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, MissingSpaceLeft)
{
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, MissingSpaceRight)
{
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, NoNumsInTimeStamp)
{
//  loadVtt();
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
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, BadTimeStamps1)
{
//  loadVtt();
}

/*
 * This tests the bare minimum required for a valid WebVTT file with
 * one cue and no content.
 * ACCORDING TO WEBVTT SPEC DATE:
 * WHICH STATED:
 *
*/
TEST_F(CueGeneralTests, BadTimeStamps2)
{
//  loadVtt();
}
